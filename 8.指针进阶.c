//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
//    *pc = 'w';
//    return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//    const char* pstr = "hello bit.";
//    printf("%s\n", pstr);
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//    return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    printf("%p\n", arr);//地址 首元素的地址
//    printf("%p\n", arr + 1);//加4 
//    printf("%p\n", &arr[0]);//首元素地址 
//    printf("%p\n", &arr[0] + 1);//加4 
//    printf("%p\n", &arr);//整个数组的地址
//    printf("%p\n", &arr + 1);//跳过一个数组 加sz*4 
//    //&arr-&数组名 数组名不是首元素的地址 数组名表示整个数组 
//    //-&数组名 取出的是整个数组的地址 
//    return 0;
//}
//
//#include <stdio.h>
//void test(int arr[])//1 
//{}
//void test(int arr[10])//2 
//{}
//void test(int* arr)//3 
//{}
//void test2(int* arr[20])//4 
//{}
//void test2(int** arr)//5 
//{}
//int main()
//{
//    int arr[10] = { 0 };
//    int* arr2[20] = { 0 };
//    test(arr);
//    test2(arr2);
//}
//
//void test(int arr[3][5])//1
//{}
//void test(int arr[][5])//2
//{}
//void test(int arr[3][])//3
//{}
//void test(int arr[][])//4
//{}
//void test(int* arr)//5
//{}
//void test(int* arr[5])//6 
//{}
//void test(int(*arr)[5])//7 
//{}
//void test(int** arr)//8 
//{}
//int main()
//{
//    int arr[3][5] = { 0 };
//    test(arr);
//}
//
//#include <stdio.h>
//void test(int** ptr)
//{
//    printf("num = %d\n", **ptr);
//}
//int main()
//{
//    int n = 10;
//    int* p = &n;
//    int** pp = &p;
//    test(pp);
//    test(&p);
//    return 0;
//}
//
//#include <stdio.h>
//int add(int a, int b)
//{
//    return a + b;
//}
//int sub(int a, int b)
//{
//    return a - b;
//}
//int mul(int a, int b)
//{
//    return a * b;
//}
//int div(int a, int b)
//{
//    return a / b;
//}
//int main()
//{
//    int x, y;
//    int input = 1;
//    int ret = 0;
//    int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //转移表
//    while (input)
//    {
//        printf("*************************\n");
//        printf(" 1:add           2:sub \n");
//        printf(" 3:mul           4:div \n");
//        printf("*************************\n");
//        printf("请选择：");
//        scanf("%d", &input);
//        if ((input <= 4 && input >= 1))
//        {
//            printf("输入操作数：");
//            scanf("%d %d", &x, &y);
//            ret = (*p[input])(x, y);
//        }
//        else
//            printf("输入有误\n");
//        printf("ret = %d\n", ret);
//    }
//    return 0;
//}
//
//#include <stdio.h>
//int int_cmp(const void* p1, const void* p2)
////比较函数 比较两个元素的地址 void*可以接收任意类型的地址 
//{
//    return (*(int*)p1 - *(int*)p2);
//    //先强制转化成int*(比较什么类型强制转化成什么*) 再解引用操作 
//}//p1<p2 返回<0的数 p1=p2返回0 p1>p2返回>0的数 
//void _swap(void* p1, void* p2, int size)
//{
//    int i = 0;
//    for (i = 0; i < size; i++)
//    {
//        char tmp = *((char*)p1 + i);
//        *((char*)p1 + i) = *((char*)p2 + i);
//        *((char*)p2 + i) = tmp;//强制类型转化后解引用 
//    }
//}
//void bubble(void* base, int count, int size, int(*cmp)(void*, void*))
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < count - 1; i++)
//    {
//        for (j = 0; j < count - i - 1; j++)
//        {
//            if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)//返回后 
//            {
//                _swap((char*)base + j * size, (char*)base + (j + 1) * size, size);//比较 
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//    //char *arr[] = {"aaaa","dddd","cccc","bbbb"};
//    int i = 0;
//    bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//    //第一个参数 待排序数组的首元素地址
//    //第二个参数 待排序数组的元素个数
//    //第三个参数 待排序数组的每个元素的大小 单位是字节
//    //第四个参数 是函数指针 比较两个元素的所用函数的地址 这个函数使用者自己实现
//    //           函数指针的两个参数是 待比较的两个元素的地址
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//数组名是首元素地址
//	//两个例外
//	//1sizeof(数组名)表示整个数组
//	//2&数组名 表示整个数组 
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));      //16  计算数组总大小 
//	printf("%d\n", sizeof(a + 0));    //4/8  计算算首元素地址  
//	printf("%d\n", sizeof(*a));     //4/8 首元素地址解引用=首元素 
//	printf("%d\n", sizeof(a + 1));    //4/8 第二个元素的地址 
//	printf("%d\n", sizeof(a[1]));   //4   第二个元素大小 
//	printf("%d\n", sizeof(&a));     //4/8 &a取出的是数组的地址 还是4/8 
//	//printf("%d\n",sizeof(*&a));    //16  取地址a是数组地址 数组地址解引用访问整个数组  
//	printf("%d\n", sizeof(&a + 1));   //4/8 取地址a是数组地址 +1跳过1个数组 还是地址 
//	printf("%d\n", sizeof(&a[0]));  //4/8 第一个元素地址 
//	printf("%d\n", sizeof(&a[0] + 1));//4/8 第二个元素地址
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));       //6        整个char 
//	printf("%d\n", sizeof(arr + 0));     //4/8      首元素地址 
//	printf("%d\n", sizeof(*arr));      //1        arr是首元素地址 *arr就是首元素 
//	printf("%d\n", sizeof(arr[1]));    //1    
//	printf("%d\n", sizeof(&arr));      //4/8      数组的地址 
//	printf("%d\n", sizeof(&arr + 1));    //4/8      跳过一个数组的地址 
//	printf("%d\n", sizeof(&arr[0] + 1)); //4/8    
//	printf("%d\n", strlen(arr));       //随机值   从首元素开始往后走直到碰到\0 
//	printf("%d\n", strlen(arr + 0));     //随机值       
//	//printf("%d\n", strlen(*arr));      //报错     相当于97访问 
//	//printf("%d\n", strlen(arr[1]));    //报错     相当于98访问 
//	printf("%d\n", strlen(&arr));      //随机值     
//	//printf("%d\n", strlen(&arr+1));    //随机值-6 跳过了一个数组 
//	//printf("%d\n", strlen(&arr[0]+1)); //随机值-1 跳过了一个元素
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));       //7 
//	printf("%d\n", sizeof(arr + 0));     //4/8 
//	printf("%d\n", sizeof(*arr));      //1 
//	printf("%d\n", sizeof(arr[1]));    //1 
//	printf("%d\n", sizeof(&arr));      //4/8 
//	printf("%d\n", sizeof(&arr + 1));    //4/8 
//	printf("%d\n", sizeof(&arr[0] + 1)); //4/8 
//	//printf("%d\n", strlen(arr));       //6 
//	//printf("%d\n", strlen(arr+0));     //6 整个数组同上 
//	//printf("%d\n", strlen(*arr));      //报错 strlen只能接收字符地址 
//	//printf("%d\n", strlen(arr[1]));    //报错 
//	//printf("%d\n", strlen(&arr));      //6  整个数组同上 
//	//printf("%d\n", strlen(&arr+1));    //随机值 跳过一个数组 跳过了\0 
//	//printf("%d\n", strlen(&arr[0]+1)); //5
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));         //4/8     计算指针变量p的大萧 
//	printf("%d\n", sizeof(p + 1));       //4/8     p+1得到的是字符b的地址 
//	//printf("%d\n", sizeof(*p));        //1       p是首个字符的地址 *p就是字符串的第一个字符 
//	printf("%d\n", sizeof(p[0]));      //1       int arr[10];arr[0]==*(arr+0)  p[0]==*(p+0)=='a'  
//	printf("%d\n", sizeof(&p));        //4/8                                              
//	printf("%d\n", sizeof(&p + 1));      //4/8 
//	printf("%d\n", sizeof(&p[0] + 1));   //4/8     都是地址 
//	//printf("%d\n", strlen(p));         //6       从a开始走  
//	//printf("%d\n", strlen(p+1));       //5       从b开始走 
//	//printf("%d\n", strlen(*p));        //报错    *p是a 会变成ASCII码值 非法访问     
//	//printf("%d\n", strlen(p[0]));      //报错    p[0]=*(p+0) 同上一个 
//	//printf("%d\n", strlen(&p));        //随机值  将a的地址存起来 不确定  
//	//printf("%d\n", strlen(&p+1));      //随机值  将a的地址存起来 跳过一个地址 不确定                         
//	//printf("%d\n", strlen(&p[0]+1));   //5       从b开始往后数
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));          //48 
//	printf("%d\n", sizeof(a[0][0]));    //4    就是一个整形元素大小 不是地址 
//	//printf("%d\n",sizeof(a[0]));       //16   a[0]第一行作为一维数组的数组名  4*4    
//	printf("%d\n", sizeof(a[0] + 1));     //4/8  a[0]是第一行的数组名 数组名代表首元素地址 所以a[0]是第一行首元素的地址 a[0]+1是第一行第二个元素的地址                                        
//	//printf("%d\n",sizeof(*(a[0]+1)));  //4    第一行第二个元素的地址 解引用 就是第二个元素 
//	printf("%d\n", sizeof(a + 1));        //4/8  a是二维数组的数组名 没有sizeof 也没有& 所有a是首元素地址 而二维数组的首元素是第一行 a是第一行的地址 第二行地址 
//	//printf("%d\n",sizeof(*(a+1)));     //16   a+1是第二行地址 解引用 
//	printf("%d\n", sizeof(&a[0] + 1));    //4/8  第二行的地址 取第一行地址 加1就是第二行地址 
//	printf("%d\n", sizeof(*(&a[0] + 1))); //16   第二行的地址 解引用 
//	//printf("%d\n",sizeof(*a));         //16   a是整个数组数组名 数组名表示首元素地址 也就是第一行的地址 解引用后就为第一行 
//	//printf("%d\n",sizeof(a[3])); 	   //16   不会真的访问第一行 与a[0]相同 
//
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1)); //2 5 跳过一个数组 减1就是5的地址 解引用就是5
//
//
//	//由于还没学习结构体，这里告知结构体的大小是20个字节
//	struct Test
//	{
//		int Num;
//		char* pcName;
//		short sDate;
//		char cha[2];
//		short sBa[4];
//	}*p;
//	//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//	//已知，结构体Test类型的变量大小是20个字节
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);               //结构体 等于跳20个字节 转化成16进制 0x00100014 
//	printf("%p\n", (unsigned long)p + 0x1);//整数    0x00100001 等于加1 
//	printf("%p\n", (unsigned int*)p + 0x1);//加4 0x1000004   
//
//
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);//跳过一个数组 在4后面 
//	int* ptr2 = (int*)((int)a + 1);//5+1=6 5和6地址之间只差1的字节  
//	printf("%x,%x", ptr1[-1], *ptr2);//ptr1[-1]==*(ptr1-1) 4 02000000 01 00000 02 000000偏移一个字节 倒着打印
//
//
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//注意逗号表达式 
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//1
//
//
//	int a[5][5];//加一偏移4个元素 二维数组是连续存放的 
//	int(*p)[4];//&p[4][2]==*(*(p+4)+2) 等于跳16个元素 第十六个元素地址 解引用再加2 等于第18个元素 再取地址等于第18个元素地址  
//	p = a;//int(*)[4] int(*)[5]类型不一样 //a[4][2]等于第23个元素地址  第十八个元素后面  第二十三个元素前面 相减是-4 地址相减是元素个数 
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//10000000000000000000100 -4原码 
//	return 0;                                                    //11111111111111111111011 -4反码 
//}//0xFFFFFFFC -4    4个1是f 1100是c                              //11111111111111111111100 =4补码  地址按补码打印 
//
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);//跳过一个二维数组 &aa整个二维数组地址初始  
//	int* ptr2 = (int*)(*(aa + 1));//aa首行地址 跳过一行 指向第二行第一个元素前面 
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 5 
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);//at 
//	return 0;
//}
//
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER +3向后走3个字符 
//	printf("%s\n", *cpp[-2] + 3);//ST 
//	printf("%s\n", cpp[-1][-1] + 1);//EW 
//	return 0;//画图解决 
//}
