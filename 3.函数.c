//#define _CRT_SECURE_NO_WARNINGS 1
//
//int get_max(int x, int y)//a对应x b对应y 返回类型为int
//{
//	if (x > y)
//		return x;//x大 返回x 
//	else
//		return y;//反之返回y
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//自定义函数 a b作为两个参数传给函数
//	printf("max=%d\n", max);
//	return 0;
//}
//
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);
//	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
//	Swap2(&num1, &num2);
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}
//
//#include<stdio.h>
//int is_prime(int n)//是素数返回1 不是返回0 
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return -1;//return -1 代表不是素数 
//		}
//	}
//	return 1;//n==j的时候直接来这里 全部试除完 再return 1 
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (is_prime(i) == 1)//再通过返回条件来打印素数和不是素数 
//		printf("素数");
//	else
//		printf("不是素数");
//	return 0;
//}
//
//#include<stdio.h>
//int is_leap_year(int y)//y读取return 后面数值 再传给主函数里的函数括号里面 用if判断 
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))//闰年判断条件
//		return 1;//是闰年 
//	else
//		return -1;//代表不是闰年 
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (1 == is_leap_year(year))
//	{
//		printf("闰年");
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//	return 0;
//}
//
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
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//传递过去的是数组arr首元素的地址 本质上arr是一个指针 
//	int ret = binary_search(arr, k, sz);
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
//
//#include<stdio.h>
//int plus(int* n)
//{
//	return ++(*n);
//}
//int main()
//{
//	int num = 0;
//	int ret = plus(&num);
//	printf("%d", ret);
//	return 0;
//}
//
//#include <stdio.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>//strlen函数计算长度所需头文件  
//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));//stract库函数 bit添加到数组arr的后面 
//	printf("%d\n", ret);//hellobit 结果为8 
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf返回值是写入的字符总数 最后打印4321 
//	return 0;
//}
//
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
//
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
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr是数组 数组传参 传过去的是第一个元素的地址 
//	printf("len=%d\n", len);
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
////my_strlen("bit")
////1+my_strlen("it")
////继续 
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr是数组 数组传参 传过去的是第一个元素的地址 
//	printf("len=%d\n", len);
//	return 0;
//}
//
//#include<stdio.h>
//int Fac2(int n)
//{
//	if (n <= 1)//n=1时 1的阶乘为1 直接返回1 
//		return 1;
//	else
//		return n * Fac2(n - 1);//Fac(n-1)会再走一遍函数 这时候n-1为判断条件   
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}
//
//#include<stdio.h>
//int Fib(int n)
//{
//	long long int a = 1;//n<=2时 返回1 
//	long long int b = 1;
//	long long int c = 1;
//	while (n > 2)//循环实现 效率高于递归
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;//算的次数 
//	}
//	return c;
//}
//int main()
//{
//	long long int n = 0;//定义n 求第n个 
//	long long int ret = 0;//ret 最后结果 
//	scanf("%d", &n);//输入n 
//	ret = Fib(n);//ret=函数()最后结果 
//	printf("ret=%d\n", ret);
//	return 0;
//}
//
//#include<stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);//利用函数返回 求过大数字会运行很慢 
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}