//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//int main()
//{
//	printf("Hello World！");
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    printf("%d\n", sizeof(char));//1
//    printf("%d\n", sizeof(short));//2      
//    printf("%d\n", sizeof(int));//4
//    printf("%d\n", sizeof(long));//8
//    printf("%d\n", sizeof(long long));//8
//    printf("%d\n", sizeof(float));//8
//    printf("%d\n", sizeof(double));//8
//    printf("%d\n", sizeof(long double));//16
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int age = 18;
//    float weight = 50.5;
//    char ch = 'w';
//    return 0;
//}
//
//#include <stdio.h>
//int global = 2022;
//int main()
//{
//    int local = 2021;
//    int global = 2020;
//    printf("global = %d\n", global);
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int input = 0;
//    printf("加入比特\n");
//    printf("你要好好学习吗？(1/0)");
//    scanf("%d", &input);//1/0
//    if (input == 1)
//        printf("好offer");
//    else
//        printf("卖红薯\n");
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    char ch = 'A';
//    printf("%c\n", ch);
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    printf("输入两个操作数:>");
//    scanf("%d %d", &num1, &num2);
//    sum = num1 + num2;
//    printf("sum = %d\n", sum);
//    return 0;
//}
//
//1000;
////字面常量
//
//#define MAX 100
////define定义常量
//
//enum Sex
//{
//    male,
//    female,
//    secret
//};
////枚举常量
////枚举常量的默认是从0开始，依次向下递增1的
//
//const float pai = 3.14f;
////这里的pai是const修饰的常变量
//
//#include <stdio.h>
//int main()
//{
//    char arr1[] = "abc";//数组
//    char arr2[] = { 'a','b','c','\0' };// \0为字符串结束标志 不加会输出随机值 
//    printf("%s\n", arr1);//%s打印字符串 
//    printf("%s\n", arr2);
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    char arr1[] = "abc";
//    char arr2[] = { 'a','b','c' };
//    printf("%d\n", strlen(arr1));
//    //3已知 strlen计算字符串长度 
//    printf("%d\n", strlen(arr2));
//    //未知 无\0 \0为结束标志 不算字符串长度
//    printf("%c\n", '\32');
//    //32作为八进制数字转化成十进制数字后所代表的ASCII码值对应的字符  
//    //32十进制为26 26作为ASCII码值 
//    printf("%c\n", '\x61');
//    //61作为16进制数字转化成十进制数字后所代表的ASCII码值对应的字符 
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    printf("abc\n");//、
//    printf("c:\\test\32\\test.c");
//    //\t水平制表符
//    printf("%c\n", 'a');
//    //打印字符a
//    printf("%c\n", '\'');
//    //打印单引号 加\ 转义变为普通单引号
//    printf("%s\n", "\"");
//    //加\防止23双引号配对
//    //？？＋）三字母词会解析成花括号  想正常输出？在前加\转义 
//    //想正常打印 再加\
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    printf("%d\n", strlen("abcdef"));
//    printf("%d\n", strlen("c:\test\628\test.c"));
//    return 0;
//}
//答案:6和14
//解析 :
//第一行打印abcdef的长度 默认有\0  \0不计入字符串的长度      
//打印结果为6
//第二行打印 \t为一个字符 \62也为一个字符 8进制形式 数一下  打印结果为1

//#include <stdio.h>
//int main()
//{
//    int coding = 0;
//    printf("你会去敲代码吗？（选择1 or 0）:>");
//    scanf("%d", &coding);
//    if (coding == 1)
//    {
//        prinf("坚持，你会有好offer\n");
//    }
//    else
//    {
//        printf("放弃，回家卖红薯\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 10000)
//	{
//		printf("emo\n");
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    printf("输入两个操作数:>");
//    scanf("%d %d", &num1, &num2);
//    sum = num1 + num2;
//    printf("sum = %d\n", sum);
//    return 0;
//}
////上述代码，写成函数如下：
//#include <stdio.h>
//int Add(int x, int y)
//{
//    int z = x + y;
//    return z;
//}
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    printf("输入两个操作数:>");
//    scanf("%d %d", &num1, &num2);
//    sum = Add(num1, num2);
//    printf("sum = %d\n", sum);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整数数字的数组
//	//char ch[20]; 下标是从0开始 依次递增 
//	//float arr2[5]; 等等 数组定义 
//	printf("%d\n", arr[4]);//打印第5个元素 下标为4
//	int i = 0;//while语句 
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	//移位操作符 移2进制
//	//1整型占4个字节 32bit位
//	//000000000000000000000000000000001 31个0 
//	int b = a << 2;//<<左移 >>右移 左移后后面补0 
//	printf("%d\n", b);
//	//左移右移不改变a的值 a还是为1
//	//b的值为1*2*2=4
//	return 0;
//}

//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//int arr[10]={0};
//	//arr[4];//[]-下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()--函数调用操作符
//	printf("sum=%d", sum);
//	return 0;
//}
////只要是整数 内存中存储的都是二进制的补码
////正数--原码 反码 补码 相同
////负数：
////原码                  反码                           补码
////直接按照正负       原码的符号位(最高位)不变        反码＋1 
////写出的二进制序列   其他都按位取反

//#include <stdio.h>
//void test()
//{
//    int i = 0;
//    i++;
//    printf("%d ", i);
//}
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        test();
//    }
//    return 0;
//}
//打印10个1

//#include <stdio.h>
//void test()
//{
//    //static修饰局部变量
//    static int i = 0;
//    i++;
//    printf("%d ", i);
//}
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        test();
//    }
//    return 0;
//}
//打印1 2 3 4 5 6 7 8 9 10

//#include <stdio.h>
//int main()
//{
//    int num = 10;
//    &num;//取出num的地址
//    //注：这里num的4个字节，每个字节都有地址，取出的是第一个字节的地址（较小的地址）
//    printf("%p\n", &num);//打印地址，%p是以地址的形式打印
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int num = 10;
//    int* p = &num;
//    *p = 20;
//    return 0;
//}

//struct Stu
//{
//    char name[20];//名字
//    int age;      //年龄
//    char sex[5];  //性别
//    char id[15]; //学号
//};
////打印结构体信息
//struct Stu s = { "张三", 20， "男"， "20180101" };
////.为结构成员访问操作符
//printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);
////->操作符
//struct Stu* ps = &s;
//printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id);
//没写主函数 只是说明一下