//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//int main()
//{
//	//int a=5/2;//商2余1
//	double a = 5 / 2.0;//%两边必须都是整数 
//	printf("a=%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	int a = 16;
//	//>> --右移操作符
//	//移动的是二进制位
//	int b = a >> 1;//两种移动方法 1算数右移(右边丢弃 左边补原符号位) 2逻辑右移(右边丢弃 直接补0) 
//	printf("%d", b);//一般都为算数右移 
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	//&-按2进制位
//	//|按2进制位或
//	//^按二进制位异或 相同为0 相异为1 	
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	//c://011
//		//101
//		//001
//
//	//d://011
//		//101
//		//111 
//
//	//e://011 
//		//101
//		//110
//	printf("%d\n%d\n%d\n", c, d, e);//1 7 6 
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int tmp = 0;
//	printf("before:a=%d,b=%d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("after:a=%d,b=%d\n", a, b);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int tmp = 0;
//	printf("before:a=%d,b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("after:a=%d,b=%d\n", a, b);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int tmp = 0;
//	printf("before:a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after:a=%d,b=%d\n", a, b);
//	return 0;
//}
//
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//统计num的补码中有几个1
//	while (num != 0)
//	{
//		if (num % 2 == 1)//最后一位是1
//			count++;
//		num = num / 2;//右移1位
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int num = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;//计数
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}
//
//
//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	//~按位取反
//	//00000000000000000000
//	//11111111111111111111 -补 
//	//11111111111111111110 -反 
//	//10000000000000000001 -原
//	//-1 
//	printf("%d\n", ~a);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d", a > b ? a : b);
//	return 0;
//}
//
//#include <stdio.h>
//void test1()
//{
//	printf("hehe\n");
//}
//void test2(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1();            //实用（）作为函数调用操作符。
//	test2("hello bit.");//实用（）作为函数调用操作符。
//	return 0;
//}
//
//
//#include <stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//学生对象s1 
//	struct Stu s1 = { "张三",20,"2019010305" };
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//结构体指针->成员名 
//	printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	return 0;
//}
//
//
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}
//
//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);
//	return 0;
//}
//
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);//输出多少？
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}