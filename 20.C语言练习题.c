#define _CRT_SECURE_NO_WARNINGS 1

//1.猜名次 
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
#include<stdio.h>
//真话为1 假话为0 相加来作为if的判断条件 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						//表达式为真就得到1
//						//表达式为假就得到0
//						//真话一半 假话一半
//						//和为1
//						//5个人都是一半真一半假 
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							//不论谁是1 2 3 4 5
//							//1*2*3*4*5=120  
//							if (a * b * c * d * e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//2.猜凶手
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//#include<stdio.h>
//int main()
//{
//	int killer=0;
//	for(killer='a';killer<='d';killer++)
//	{
//		if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
//		{
//			printf("killer=%c\n",killer);
//		}
//	}
//	return 0;
//}

//赛马问题 36匹马 没有计时器 共6个跑道 最少赛几次 可以知道36匹马中的前三名 8次 
//25匹马  5个跑道 7次
//烧香问题
//有一种香 材质不均匀 但是每一根这样的香水 烧完恰好1小时
//2根香 确定15min时间
//第一根香两头点燃 第二根香燃一头
//第一根烧完后再点燃第二根香的另一头 


//3.从大到小输出数字
//定义3个整型变量
//输入这3个整型变量
//最后打印出的结果是按顺序从大到小的三个数字
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//2 1 3
//	//a中放最大值
//	//b次之
//	//c中放最小值
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = c;
//		c = b;
//		b = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//4.按顺序(从高位到低位)打印一个数的每一位数
//输入一个数
//从高位到低位输出每一位数
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//调用完后 执行完会回来 一直打印 1 2 3 4 
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	//1234
//	//123 4
//	//12 3 4
//	//1 2 3 4拆开 
//	return 0;
//}


//5.用递归实现n的阶乘
//输入一个数
//输出这个数的阶乘
//用递归实现
//#include<stdio.h>
//int Fac2(int n)
//{
//	if (n <= 1)//n=1时 1的阶乘为1 直接返回1 
//		return 1;
//	else
//		return n * Fac2(n - 1);//Fac(n-1)会再走一遍函数 这时候n-1为判断条件   
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}



//不递归:
//#include<stdio.h>
//#include<string.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//字符串 往下跳 count计数 
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[1000];
//	gets(arr);
//	int len = my_strlen(arr);//arr是数组 数组传参 传过去的是第一个元素的地址 
//	printf("len=%d\n", len);
//	return 0;
//}

//递归:
//#include<stdio.h>
//#include<string.h>
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////my_strlen("bit")
////1+my_strlen("it")
////继续 
//int main()
//{
//	char arr[1000];
//	gets(arr);
//	int len = my_strlen(arr);//arr是数组 数组传参 传过去的是第一个元素的地址 
//	printf("len=%d\n", len);
//	return 0;
//}


//6.二分查找
//输入一个数为数组元素的个数
//输入一个有序的数组
//输入一个数进行查找
//输出相关信息
//如果找到了 输出该数的下标
//如果没有找到 输出找不到的提示
//#include<stdio.h>
//int binary_search(int arr[], int k, int sz)
//{
//	//算法的实现
//	//int sz=sizeof(arr)/sizeof(arr[0]);//数组传参传过去 不能这样求 
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//写里面 每回循环完都要重新算一遍 
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回下标 找不到的返回-1 
//	int arr[100];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int s = 0;
//	int i = 0;
//	scanf("%d", &s);
//	for (i = 0; i < s; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int k = 0;
//	scanf("%d", &k);
//	//传递过去的是数组arr首元素的地址 本质上arr是一个指针 
//	int ret = binary_search(arr, k, s);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找得到,下标是：%d\n", ret);
//	}
//	return 0;
//}

//8.斐波那契数列
//#include<stdio.h>
//long long int Fib(long long int n)
//{
//	long long int a = 1;//n<=2时 返回1 
//	long long int b = 1;
//	long long int c = 1;
//	while (n > 2)//循环实现
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;//算的次数 
//	}
//	return c;
//}
//
//int main()
//{
//	long long int n = 0;//定义n 求第n个 
//	long long int ret = 0;//ret 最后结果 
//	scanf("%lld", &n);//输入n 
//	ret = Fib(n);//ret=函数()最后结果 
//	printf("ret=%lld\n", ret);
//	return 0;
//}


//9.分数求和
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;//直接累加效果 分数求和
//		flag = -flag;//加减交替求和 巧妙换号 
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}


//10.喝汽水问题
//#include<stdio.h>
//int main()
//{
//	int money = 0;//规律total=2*money-1 一个空瓶0.5元 20块等于40个空瓶 最后你会留一瓶空瓶 -1=39 
//	int total = 0;//喝掉总数量 
//	int empty = 0;//空瓶数量 
//	scanf("%d", &money);
//	//买回的汽水喝掉 
//	total = money;
//	empty = money;
//	//换回来的汽水
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;//换的汽水瓶子加剩下空瓶 
//	}
//	printf("%d", total);
//	return 0;
//}


//11.逆序字符串
//#include<stdio.h>
//#include<string.h>
////#include<assert.h> 
//void reverse(char* str)
//{
//	//assert(str);
//	int len = strlen(str);
//	char* left = str;//首元素地址
//	char* right = str + len - 1;//最后一个元素地址 起始地址加长度减一 
//	while (left <= right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%s", &arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//12.杨氏矩阵
//#include<stdio.h>
//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)//在范围内多次查找 
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;//直接返回到外面的x y 此时找到了 
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 0;
//	scanf("%d", &k);
//	int x = 3;
//	int y = 3;
//	//先找到右上角的下标 通过右上角的下标开始扫描整个数组 
//	int ret = FindNum(arr, k, &x, &y);//传x y地址 返回型参数 
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是%d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//13.字符串左旋
//1暴力 
//#include <stdio.h>
//void left_move(char arr[], int k)//第一个参数写char* arr也可 
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋一个字符
//		//挪 
//		char tmp = *arr;//第一个元素
//		int j = 0;
//		for (j = 0; j < len - 1; j++)//j+1<len
//		{
//			*(arr + j) = *(arr + j + 1);//看成arr[j]=arr[j+1] 
//		}
//		//最后一个元素 
//		*(arr + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[100];
//	gets(arr);
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//2三步翻转法
//abcdef
//bafedc
//cdefab
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//reverse(char* left, char* right)//逆序的实现 左边下标与对应的右边下标交换 
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr + k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体 
//}
//int main()
//{
//	char arr[100];
//	gets(arr);
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}


//14.奇数偶数交换
//#include<stdio.h>
//从左边开始找一个偶数
//从右边开始找一个奇数
//交换
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//从左边找偶数 如果全是奇数 无left<right会越界 
//		while ((left < right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//从右边找奇数 
//		while ((left < right) && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		//交换 
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//15.判断字符旋转
//#include<stdio.h>
//#include<string.h>
//void left_move(char arr[],int k)//第一个参数写char* arr也可
//{
//	int i=0;
//	int len=strlen(arr);
//	for(i=0;i<k;i++)
//	{
//		//左旋一个字符
//		//挪
//		char tmp=*arr;//第一个元素
//		int j=0;
//		for(j=0;j<len-1;j++)//j+1<len
//		{
//			*(arr+j)=*(arr+j+1);//看成arr[j]=arr[j+1]
//		 }
//		//最后一个元素
//		*(arr+len-1)=tmp;
//	}
//}
//int is_left_move(char s1[],char s2[])
//{
//	int len=strlen(s1);
//	int i=0;
//	for(i=0;i<len;i++)
//	{
//		left_move(s1,1);//旋转1个字符比较1次
//		int ret=strcmp(s1,s2);
//		if(ret==0)
//		return 1;
//	 }
//	return 0;
//}
//int main()
//{
//	char arr1[100];//写成指针的话 是常量字符串 改变不了
//	char arr2[100];
//	gets(arr1);
//	gets(arr2);
//	int ret=is_left_move(arr1,arr2);
//	if(ret==1)
//	printf("Yes\n");
//	else
//	printf("No\n");
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;//字符长度一样 不一样可能输出yes 
//	//1在str1后面追加一个str1 stract自己给自己加会出问题 
//	//strcat(s1,s1);error
//	strncat(str1, str1, 6);//最后一个参数为添加字符个数 
//	//2判断str2指向的字符串是否是str1指向的字符串的子串 
//	//strstr-找子串
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[100];
//	char arr2[100];
//	gets(arr1);
//	gets(arr2);
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}