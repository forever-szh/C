#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//F5启动调试 和F9配合使用
//

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");//debug死循环 //release会优化 不会死循环
//	return 0;
//}
//当你调试的时候 用监视窗口 发现arr[12]和i的地址相同
//所以当把arr[12]赋值为0的时候 i也等于0了 所以死循环
//QQ看图片
//VC6.0 <=10死循环
//gcc <=11 死
//VS2013 <=12死
//DEBUG 没问题
//release 可能有问题 优化过了
//直接记录


//F9 断点
//F5 会直接跳到断点
//F10 会一句一句代码走
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//	return 0;
//}


//F10 会放过Add函数
//F11 每条语句都会走

//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;//保存最终结果
	int n = 0;
	int ret = 1;//保存n的阶乘
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)//如何快速调试到3的阶乘 
		{//断点右键可以设置条件 然后加上F5直接快速调试到3的阶乘
			ret *= j;
		}
		//ret没有从1开始算阶乘
		sum += ret;
		ret = 1;
	}
	printf("%d\n", sum);
	return 0;
}

//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
	//while (*src != '\0')
	//{
	//	*dest = *src;
	//	src++;
	//	dest++;
	//}
	//*dest = *src;// \0拷贝
	//6分
	//while (*dest++ = *src++)
	//{
	//	;
	//}
	//7分
	//万一传过来空指针
	//if (dest != NULL && src != NULL)
	//{
	//	while (*dest++ = *src++)
	//	{
	//		;
	//	}
	//}
	//传过来空指针没有干任何事
	//assert(dest!=NULL);//断言 引入头文件
	//assert(src != NULL);//编译的时候直接告诉你问题
	//while (*dest++ = *src++)
	//{
	//	;
	//}
	//8分
//}

//void my_strcpy(char* dest,const char* src)//加const 提前暴露错误 不会被dest赋值
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest=*src)//*src++ = *dest++这样会报错
//	{
//		;
//	}
//	//这样的话只能调试找 但是加了const说明源头不能改变
//	//可以直接暴露错误 代码更加安全 
//	//9分
//}

//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)//拷贝之后返回目的地的地址
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//把src指向的字符串拷贝到dest指向的空间
//	//包含'\0'字符
//	while (*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//	//10分
//}
//
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "#########";
//	char arr2[] = "bit";
//	//my_strcpy(arr1,arr2);// \0会被拷贝过去
//	//printf("%s\n", arr1);
//	//10分可以改成
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	int* p = &num;
//	//const int* p=&num;加const 即使把num给到p也无法修改
//	//const放在指针变量的*左边时 修饰的*p 也就是说
//	//不能通过p来改变*p(num)的值 *p无法改变
//	//const放在指针变量的*右边时 修饰的是指针变量p本身
//	//也就是说p不能被改变了 p得到的地址无法改变
//	*p = 20;
//	printf("%d\n", num);
//	//p破坏了规则 会改变num
//	return 0;
//}

//#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}