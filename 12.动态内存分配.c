#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
/*struct S
{
	char name[20];
	int age;
};

int main()
{
	struct S arr[50];//50个struct S 类型的数据
	//30 浪费
	//60 不够
	return 0;
}*/
//dev-c++是可以支持C99标准 可以创建变长数组

//malloc free

#include<stdlib.h>//malloc头文件
#include<string.h>
#include<errno.h>
//int main()
//{
//	//向内存申请10个整型的空间
//	int* p=(int*)malloc(10*sizeof(int));
//	//malloc返回void* 强制转换
//	//malloc(INT_MAX)超级大的数字
//	//开辟这么多字节 如果内存不够 不会开辟这么多
//	//错误原因是not enough space
//	//内存够可以正常开辟
//	if(p==NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i=0;
//		for(i=0;i<10;i++)
//		{
//			*(p+i)=i;
//		}
//		for(i=0;i<10;i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统
//	free(p);
//	//free就是主动回收 不加free可能会先浪费空间
//	//没有free到return 0后系统会自动回收
//	//后面如果还有代码 可以先回收再申请空间
//	//不加free 前面代码占用一些空间
//	p=NULL;
//	return 0;
//}

//int main()
//{
//	//malloc(10*sizeof(int))
//	int* p=(int*)calloc(10,sizeof(int));//元素会初始化为0
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i=0;
//		for(i=0;i<10;i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	//释放空间
//	//free是用来释放动态开辟的空间的
//	free(p);
//	p=NULL;
//	return 0;
//}

//int main()
//{
//	int *p=(int*)malloc(20);
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		int i=0;
//		for(i=0;i<5;i++)
//		{
//			*(p+i)=i;
//		}
//	}
//	//就是在使用malloc开辟的20个字节空间
//	//假设这里 20个字节就不能满足我们的使用了
//	//这里就可以使用realloc来调整动态开辟的内存
//	//当malloc后面的空间足够的话会追加
//	//当malloc后面的空间不够的时候会开辟出新的一块空间
//	//并且把原来的数据拿到新空间 旧空间free掉
//	//realloc使用的注意事项:
//	//1.如果p指向的空间之后有足够的空间可以追加 则直接追加 返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加 则realloc函数会重新
//	//  开辟一块满足需求的空间 并且把原来内存中的数据copy回来 释放旧的内存空间
//	//  最后返回新开辟的内存空间地址
//	//3.用一个新的变量来接受realloc函数的返回值
//	int* ptr=realloc(p,INT_MAX);//如果赋值给p 空间过大会导致p丢失
//	if(ptr!=NULL)//可追加条件
//	{
//		p=ptr;
//		int i=0;
//		for(i=5;i<10;i++)
//		{
//			*(p+i)=i;
//		}
//		for(i=0;i<10;i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	//释放内存
//	free(p);
//	p=NULL;
//	return 0;
//}

//int main()
//{
//	//1.对NULL进行解引用操作
//	int* p=(int*)malloc(40);
//	//万一malloc失败了 p就被赋值为NULL
//	//空指针解引用 error
//	//要进行判断
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		*(p+i)=i;
//	}
//	free(p);
//	p=NULL;
//	return 0;
//}

//int main()
//{
//	//2.对动态开辟的内存的越界访问
//	int *p=(int*)malloc(5*sizeof(int));
//	if(p==NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i=0;
//		for(i=0;i<10;i++)//本来只有5个 然后访问10个
//		{
//			*(p+i)=i;
//		}
//	}
//	free(p);
//	p=NULL;
//	return 0;
//}

//int main()
//{
//	int a=10;//栈区里面的空间
//	int* p=20;
//	*p=20;
//	//3.对非动态开辟内存的free
//	//堆区空间的释放
//	free(p);
//	p=NULL;
//	return 0;
//}

//int main()
//{
//	//4.使用free释放动态开辟内存的一部分
//	int *p=(int*)malloc(40);
//	if(p=NULL)
//	{
//		return 0;
//	}
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		*p++=i;
//	}
//	//回收空间
//	//p发生变化了 不是完整动态开辟的空间 只能从起始位置开始释放
//	//所以p不要改变
//	free(p);
//	p=NULL;
//	return 0;
//}

//int main()
//{
//	//5.对同一块空间进行多次释放
//	int *p=(int*)malloc(40);
//	if(p=NULL)
//	{
//		return 0;
//	}
//	//使用
//	//释放
//	free(p);
//	//p=NULL加上就不会有问题 空指针释放没有问题
//	//————
//	free(p);
//	return 0;
//}

//int main()
//{
//	//6.动态开辟内存忘记释放(内存泄露)
//	while(1)
//	{
//		malloc(1);
//	}
//	//一直吃内存 不回收
//	return 0;
//}


//int main()
//{
//	int *p=realloc(NULL,40);//等价于malloc(40)
//	return 0;
//}

//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//char* str="abcdef";
//printf("%s\n",str);
//printf(str);
//两种写法都对

//程序崩溃(str)
//传str本身 还是传值 传&str 才是传址
//str传过去给p p这时是空指针 p拿到了地址
//但没有改变str str还是空指针 helloworld拷贝到NULL
//NULL不是有效地址 程序崩溃

//str以值传递的形式给p
//p是形参 只能函数内部有效
//函数返回之后 动态开辟内存尚未释放 并且无法找到
//所以会造成内存泄露

//改1 二级指针
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);//*p
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str=NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//改2 返回
//char* GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str=GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str=NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//2返回栈空间的地址
//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//局部数组 栈空间 一出函数 数组销毁
//返回后已经给系统了
//非法访问 打印随机值
//栈空间地址返回不了 (出去之后还给系统 不知道会怎么样)
//如果是malloc 堆区里面 返回后不会自动回收 free才回收或者到return 0
//静态区也不会自动回收

//改
//char *GetMemory(void)
//{
//	static char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//加static 放入静态区 可以正常返回
//不会自动回收

//3
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//内存泄露 没有释放
//可以打印hello

//改
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
////4
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//还给操作系统了 
//	if (str != NULL)
//	{
//		strcpy(str, "world");//覆盖hello 
//		printf(str);//打印world 
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}
////释放后的空间被再次使用
////已经还给了系统 还要把world弄进去 非法访问
//
////改 
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;//空指针 主动 释放之后变为空指针 就不能去访问 
//	if (str != NULL)//代表说没释放 可以访问 判断条件是这个意思 
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}
//
//
//struct S
//{
//	int n;
//	int arr[];//未知大小的-柔性数组成员-数组的大小是可以调整的 
//	//int arr[0]或者 
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n",sizeof(s));//4 不包含数组大小 
//	struct S* ps = malloc(sizeof(struct S) + 5 * sizeof(int));
//	//4给n 20给arr
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//		//0 1 2 3 4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	return 0;
//}
//
//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));//struct开辟了一块空间 空间中有n *arr 
//	ps->arr = malloc(5 * sizeof(int));//arr再指向一块空间 实现柔性数组相同功能 
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//调整大小
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放 
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	//两次malloc 更容易出错 
//	return 0;
//}