//#define _CRT_SECURE_NO_WARNINGS 1
// 
//#include<stdio.h>
//声明一个结构体类型
//声明一个学生类型 是想通过学生类型创建学生变量(对象)
//描述学生: 属性-姓名 电话 性别
/*struct Stu//struct结构体关键字  Stu结构体标签
{
	//成员变量
	char name[20];//名字
	char tele[12];//电话
	char sex[10];//性别
	int age;//年龄
}s4,s5,s6;//全局结构体变量

struct Stu s3;//全局变量
int main()
{
	//创建的结构体变量 局部变量
	struct Stu s1;
	struct Stu s2;
	return 0;
}*/

/*struct//匿名结构体
{
	int a;
	char c;
}sa;

struct//匿名结构体指针
{
	int a;
	char c;
}*psa;

int main()
{
	psa=&sa;//编译器认为两种类型不同
	return 0;
}*/

//结构体的自引用
/*struct Node
{
	int data;//4
	//struct Node n;//自己包含自己不行 类似死递归
	stuct Node* next;//4/8
};

int main()
{
	sizeof(struct Node);
	return 0;
}*/

/*typedef struct Node
{
	int data;//4
	struct Node* next;//4/8
}Node;//起名字为Node

int main()
{
	struct Node n1;
	Node n2;
	return 0;
}

typedef struct
{
	int data;//4
	Node* next;//4/8
}Node;//还没有定义就使用

int main()
{
	struct Node n1;
	Node n2;
	return 0;
}*/

//结构体初始化和输出
/*struct T
{
	double weight;
	short age;
};

struct S
{
	char c;
	struct T st;
	int a;
	double d;
	char arr[20];
};

int main()
{
	//struct S s={'c',100,3.14,"hello bit"};
	struct S s={'c',{55.6,30},100,3.14,"hello bit"};
	printf("%c %d %lf %s\n",s.c,s.a,s.d,s.arr);
	printf("%lf\n",s.st.weight);
	return 0;
}*/

//结构体内存对齐
/*struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};

int main()
{
	struct S1 s1= {0};
	printf("%d\n",sizeof(s1));//12
	struct S2 s2= {0};
	printf("%d\n",sizeof(s2));//8
	return 0;
}*/
//看课件中的对齐规则
//全部转换成偏移量计算 最后转化成字节
//偏移量就是最后的字节数

//设置默认对齐数
/*#pragma pack(4)
struct S
{
	char c1;//1
	//7 //3
	double d;//8
	//16(8) //12(4) //9(1)
};
#pragma pack()
//取消设置的默认对齐数

int main()
{
	struct S s;
	printf("%d\n",sizeof(s));
}*/

/*#include<stddef.h>
struct S
{
	char c;
	int i;
	double d;
};

int main()
{
	//offsetof() 得到偏移量
	printf("%d\n",offsetof(struct S,c));
	printf("%d\n",offsetof(struct S,i));
	printf("%d\n",offsetof(struct S,d));
	return 0;
}*/
//offsetof宏的实现

//位段-二进制位 节省空间 原本16个字节 现在只要8个字节 
/*struct S
{
	int a:2;//2个bit位
	int b:5;//5个bit位
	int c:10;//10个bit位
	int d:30;//30个bit位
	//如果大于32会有问题
};
//47bit-6个字节*8-48bit
//内存分配空间 看课件
int main()
{
	struct S s;
	printf("%d",sizeof(s));//8个字节
	return 0;
}*/

/*struct S
{
	char a:3;
	char b:4;
	char c:5;
	char d:4;
};//3个字节 和int同理 开辟1个字节

int main()
{
	struct S s={0};
	s.a=10;
	s.b=20;
	s.c=3;
	s.d=4;
	//二进制放进去 不确定向左向右存放
	return 0;
}*/

//c语言源代码--预编译--编译--链接--可执行程序 
/*#define RED 0
#define GREEN 1
#define BLUE 2
//枚举类型
enum Sex
{
	//枚举的可能取值
	MALE=2,
	FEMALE,
	SECRET=8
	//MALE,
	//FEMALE=9,
	//SECRET,
	//0 9 10
	//可以赋值 常量赋值
};

enum Color
{
	RED,
	GREEN,
	BLUE
};

int main()
{
	enum Sex s=MALE;
	enum Color c=BLUE;
	int color=RED;
	//define定义可以
	//enum Color c=2;//c编译器没有报错 c++报错 左边枚举 右边int
	printf("%d %d %d\n",RED,GREEN,BLUE);
	//0 1 2
	printf("%d %d %d\n",MALE,FEMALE,SECRET);
	//2 3 8
	//默认从0开始 依次递增
	return 0;
}*/

//联合-联合体-共用体-共用同一块空间 
/*union Un
{
	char c;
	int i;
};//都从起始空间往后放
int main()
{
	union Un u;
	printf("%d\n",sizeof(u));
	//4
	printf("%p\n",&u);
	printf("%p\n",&(u.c));
	printf("%p\n",&(u.i));
	//三者结果一样
	return 0;
}*/


/*int check_sys()
{
	int a=1;
	return *(char*)&a;
	//返回1 表示大端
	//返回0 表示小端
}

int main()
{
	int a=1;
	int ret=check_sys();
	if(1==ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	//int a=0x11223344;
	//低地址----------------高地址
	//[] [] [11] [22] [33] [44] [] [] [] []   大端字节序存储模式
	//[] [] [44] [33] [22] [11] [] [] [] []   小端字节序存储模式
	//讨论一个数据 放在内存中的存放的字节顺序
	//大小端字节序问题
}*/

//判断大小端另一种方式的实现 
/*int check_sys()
{
	union Un//省略Un和u 匿名结构体 只用一次也可以
	{
		char c;
		int i;
	}u;
	u.i=1;
	return u.c;
	//共用地址
	//返回1 表示大端
	//返回0 表示小端
}

int main()
{
	int a=1;
	int ret=check_sys();
	if(1==ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
}*/

/*enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	enum Sex s=MALE;
	printf("%d\n",sizeof(s));
	//整型 4
	return 0;
} */

/*union Un
{
	int a;//4 8 4
	char arr[5];//5 1 8 1
	//默认对齐数是8
};

int main()
{
	union Un u;
	printf("%d\n",sizeof(u));
	//8
	return 0;
}*/