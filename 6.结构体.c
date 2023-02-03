//#define _CRT_SECURE_NO_WARNINGS 1
//
//typedef struct Stu
//{
//    //成员变量 
//    char name[20];
//    short age;
//    char tele[12];
//    char sex[5];
//}Stu;
//
//#include<stdio.h>
//struct S
//{
//    int a;
//    char c;
//    char arr[20];
//    double d;
//};
//
//struct T
//{
//    char ch[10];
//    struct S s;
//    char* pc;
//};
//
//int main()
//{
//    char arr[] = "hello bit\n";//初始化
//    struct T t = { "hehe",{100,'w',"hello world",3.14},arr };//结构体嵌套 初始化 
//    printf("%s\n", t.ch);//hehe
//    printf("%s\n", t.s.arr);//hello world
//    printf("%lf\n", t.s.d);//3.14
//    printf("%s\n", t.pc);//hello bit
//    return 0;//外结构体加点加内结构体加点加类型 
//}
//
//#include<stdio.h>
//typedef struct Stu
//{
//    char name[20];
//    short age;
//    char tele[12];
//    char sex[5];
//}Stu;
//
//Print1(Stu tmp)//s给了tmp s.换成tmp. 
//{
//    printf("name:%s\n", tmp.name);
//    printf("age:%d\n", tmp.age);
//    printf("tele:%s\n", tmp.tele);
//    printf("sex:%s\n", tmp.sex);
//}
//
//Print2(Stu* ps)
//{
//    printf("name:%s\n", ps->name);
//    printf("age:%d\n", ps->age);
//    printf("tele:%s\n", ps->tele);
//    printf("sex:%s\n", ps->sex);
//}
//
//int main()
//{
//    Stu s = { "李四",40,"15539726235","男" };
//    //Print2较好 传4或8个字节 效果更好
//    Print1(s);
//    Print2(&s);
//    return 0;
//}
////栈区 局部变量 函数的形式参数 函数调用也开辟空间
////动态内存分配 malloc/free realloc calloc
////静态区 全局变量 静态变量 
////压栈操作
////数据结构 顺序表 链表 栈 队列
////栈:先进后出 后进的后出 插入一个元素:压栈 删除一个元素:出栈