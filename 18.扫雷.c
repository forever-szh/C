game.h
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EASY_COUNT 10
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col);

//排查雷
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);

game.c
#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------扫雷游戏-----------\n");
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行号
		for (j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----------扫雷游戏-----------\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//布置10个雷
	int count = EASY_COUNT;
	while (count)
	{
		//生成随机的下标
		int x = rand()%row+1;//比如说模上9 得到0-8 加1 得到1-9
		int y = rand()%col+1;
		if (mine[x][y] == '0')//没有放雷
		{
			mine[x][y] = '1';//布置雷
			count--;
		}
	}
}

//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			//进来就肯定不是雷 所以不需要把x y处排除在外
			//因为加的话也是加0
			sum += mine[i][j] - '0';
		}
	}
	return sum;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.输入排查的坐标
	//2.检查坐标处是不是雷
		//(1)是雷    -很遗憾炸死了  游戏结束 
		//(2)不是雷  -统计坐标周围有几个雷 -存储排查雷的信息到show数组 游戏继续
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col- EASY_COUNT)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);//x--(1,9) y--(1,9)

		//判断坐标的合理性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾,你被炸死了");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//不是雷的话 统计一下x y坐标周围有几个雷
				int count = get_mine_count(mine, x, y);
				show[x][y] = count+'0';//将对应的数字转换成对应字符
				//显示排查出的信息
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标不合法,请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你,排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}

test.c
#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("************************\n");
	printf("******   1.play   ******\n");
	printf("******   0.exit   ******\n");
	printf("************************\n");
}

void game()
{
	char mine[ROWS][COLS];//存放布置好的雷的信息
	char show[ROWS][COLS];//存放排查出的雷的信息
	//初始化棋盘 多传过来一个参数 可以初始化不同数组
	InitBoard(mine, ROWS, COLS,'0');//'0'
	InitBoard(show, ROWS, COLS,'*');//'*'
	//打印一下棋盘
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine,ROW,COL);
	//isplayBoard(mine, ROW, COL);//后台显示雷
	
	//排查雷
	FindMine(mine,show,ROW,COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//扫雷游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
