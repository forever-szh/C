Contact.h
#pragma once


#include <stdio.h>
#include <string.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000

//类型的定义
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//通讯录
typedef struct Contact
{
	PeoInfo data[MAX];//存放添加进来的人的信息
	int sz;//记录的是当前通讯录中有效信息的个数
}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//增加联系人
void AddContact(Contact* pc);

//打印联系人信息
void PrintContact(const Contact* pc);

//删除指定联系人
void DelContact(Contact* pc);

//查找指定联系人
void SearchContact(Contact* pc);

//修改指定联系人
void ModifyContact(Contact* pc);

Contact.c
#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(Contact* pc)
{
	pc->sz = 0;
	//memset(); -内存设置
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("通讯录已满,无法添加\n");
		return;
	}
	//增加一个人的信息
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("增加成功\n");
}

void PrintContact(const Contact* pc)
{
	int i = 0;
	//打印标题
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n",
		"名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", 
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int FindByname(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)//比较字符串
		{
			return i;
		}
	}
	return -1;//找不到
}

void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空,无需删除\n");
		return;
	}
	printf("请输入要删除人的名字>:");
	scanf("%s", name);
	//1.查找要删除的人
	//有/没有
	int pos=FindByname(pc,name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	//2.删除
	int i = 0;
	//从下标为0的元素开始 后面覆盖前面的
	for (i = pos; i < pc->sz-1; i++)//注意越界问题
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}

void SearchContact(Contact* pc)
{
	//查找功能在删除部分写过了 修改一下就可以
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int pos = FindByname(pc, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n",
			"名字", "年龄", "性别", "电话", "地址");
			printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n",
				pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].sex,
				pc->data[pos].tele,
				pc->data[pos].addr);
	}
}

void ModifyContact(Contact* pc)
{
	//查找和添加功能 
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int pos = FindByname(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[pos].addr);
	}
	printf("修改成功\n");
}

test.c
#define _CRT_SECURE_NO_WARNINGS 1

//静态版本
//通讯录
//1.通讯录中能够存放1000个人的信息
//每个人的信息:
//名字+年龄+性别+地址
//2.增加人的信息
//3.删除指定人的信息
//4.修改指定人的信息
//5.查找指定人的信息
//6.排序通讯录的信息

#include "contact.h"

void menu()
{
	printf("**************************************\n");
	printf("******    1.add      2.del      ******\n");
	printf("******    3.search   4.modify   ******\n");
	printf("******    5.print    0.exit     ******\n");
	printf("**************************************\n");
}

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	PRINT//5
};

int main()
{
	int input = 0;
	//创建通讯录
	Contact con;//通讯录
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//增加人的信息
			AddContact(&con);
			break;
		case DEL:
			//删除
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误,重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
