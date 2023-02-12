#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//extern int Add(int x, int y);

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	int c =Add(a, b);
//	printf("c=%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//#define MAX 100

//预定义符号

//#include<stdio.h>
//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i:%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("%d\n", __STDC__);//VS不存在 DEV-C++存在
//	return 0;
//}

//#include <stdio.h>
//
//#define MAX 100
//#define STR "hehe"
//#define reg register
//#define do_forever for(;;)
//
//int main()
//{
//	do_forever
//		;//空语句 死循环
//	reg int a;
//	register int a;
//	int max = MAX;
//	printf("%d\n", max);
//	printf("%s\n", STR);
//	return 0;
//}

//#include<stdio.h>
//#define MAX 100;//加了分号
//
//int main()
//{
//	int a = MAX;
//	printf("%d\n", MAX);//会替换成100; 报错
//	return 0;
//}

//#include<stdio.h>
//#define SQUARE(X) X*X//换成(X)*(X) 可以得到36
////所以写宏的时候尽量多写括号
//
//int main()
//{
//	int ret1 = SQUARE(5);//int ret1=5*5
//	printf("ret1=%d\n", ret1);
//	int ret2 = SQUARE(5 + 1);//替换成5+1*5+1
//	printf("ret2=%d\n", ret2);
//}

//#include<stdio.h>
//
//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//
//void print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n", a);
//	print(a);
//	print(b);
//	return 0;
//}


//#include<stdio.h>
//
//#define PRINT(X) printf("the value of " #X " is %d\n",X)
//
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello" "world\n");
//	//printf("hel" "lo" "world\n");
//	//字符串会天然连接在一起
//	//#X 转换成字符串
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of" "a" "is %d\n",a);等价
//	PRINT(b);
//	//printf("the value of" "b" "is %d\n",b);等价
//	return 0;
//}

//#include<stdio.h>
//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int Class84 = 2019;
//	//printf("%d\n",Class84);
//	printf("%d\n", CAT(Class, 84));
//	//printf("%d\n",Class##84);
//	//printf("%d\n",Class84);
//	return 0;
//}


//#include<stdio.h>
//
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//	//int max = MAX(a, b);
//	int max = MAX(a++, b++);
//	//int max = ((a++) > (b++)) ? (a++) : (b++);
//	//直接替换 会出现多次加加 小心 尽量不要写带有负作用的参数
//	//先替换 后计算
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//	return 0;
//}

//#include <stdio.h>
////函数
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
////宏
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 3.0f;
//	float d = 4.0f;
//	int max = Max(a, b);
//	//放不了c和d 要写另一个函数 改变函数类型
//	//函数在调用的时候
//	//会有函数调用和返回的开销
//	printf("%d\n", max);
//	max = MAX(a, b);
//	//可以放c和d 不需要考虑类型
//	//预处理阶段就完成了替换
//	//没有函数的调用和返回的开销 效率高于函数
//	printf("%d\n", max);
//	return 0;
//}

//#include<stdio.h>
//
//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//	printf("%d\n", ret);
//	return 0;
//}
//宏可以传类型过去 函数不可以

//#include<stdio.h>
//
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	//int* p = (int*)malloc(10 * sizeof(int));
//	//简化
//	int* p = MALLOC(10, int);
//	return 0;
//}

//#include<stdio.h>
//
//#define MAX 100
//
//int main()
//{
//	printf("MAX=%d\n", MAX);
//#undef MAX
//	printf("MAX=%d\n", MAX);//用不了了 宏定义取消了
//	return 0;
//}

//#include<stdio.h>
//
//#define DEBUG
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG//DEBUG未定义就不打印 定义就打印
////#if 1 表达式为真 参与编译
////#if 0 表达式为假 不参与编译
//		printf("%d ", arr[i]);
//#endif//条件编译 
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//多分支条件编译
//#if 1==1
//	printf("haha\n");
//#elif 2==1
//	printf("hehe\n");
//#else
//	printf("heihei\n")l
//#endif
//	return 0;
//}

//#include<stdio.h>
//
//#define DEBUG 0
//
//int main()
//{
//#if defined(DEBUG)//只要定义就打印
//	printf("hehe\n");
//#endif
// 
//和上面等价
//#ifdef DEBUG
//	printf("hehe\n");
//#endif

//#if !defined(DEBUG)//不定义就打印
//	printf("hehe\n");
//#endif
//
//和上面等价
//#ifndef  DEBUG
//	printf("hehe\n");
//#endif
	//return 0;
//}

//#include<stdio.h>
//#include"add.h"//自定义头文件 先查找是不是自定义的 再查找是不是库里面的
//
//
//int main()
//{
//	int ret = Add(2, 3);
//	printf("ret=%d", ret);
//	return 0;
//}


//offsetof的实现
//#include<stdio.h>
//#include<stddef.h>
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));//看成(int)&(((struct S*)0)->c1)
//	printf("%d\n", OFFSETOF(struct S, a));//0处转换成地址 指向c1 再取c1的地址 强转成int
//	printf("%d\n", OFFSETOF(struct S, c2));//c1地址就是偏移量(原本是指针相减 起始为0)
//	return 0;//可以不用相减
//}