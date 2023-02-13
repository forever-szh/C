#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//猜数字游戏
//1电脑会生成一个随机数
//2猜数字 
void menu()
{
	printf("******************************\n");
	printf("***    1.play     0.exit   ***\n");
	printf("******************************\n");
}
void game()
{
	//1生成一个随机数
	//2猜数字
	int ret = 0;//拿时间戳来设置随机数的生成起点 time函数 放主函数里面 设置一次起点即可 
	int guess = 0;//时间戳 当前计算机的时间减去计算机的起始时间1970 1.1 00.00.00=(xxxx)秒  
	ret = rand() % 100 + 1;//生成随机数 0-32767之间 最好生成1-100随机数 
	while (1)
	{
		printf("请猜数字(0-100):>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大啦嘿嘿嘿\n");
		}
		else if (guess < ret)
		{
			printf("猜小啦嘿嘿嘿\n");
		}
		else
		{
			printf("你真好看，恭喜你，猜对啦\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择(1开始 0结束)>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}