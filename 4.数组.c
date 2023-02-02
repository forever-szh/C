//#define _CRT_SECURE_NO_WARNINGS 1
//
//数组初始化
//int arr1[10] = { 1,2,3 };
//int arr2[] = { 1,2,3,4 };
//int arr3[5] = { 1,2,3,4,5 };
//char arr4[3] = { 'a',98, 'c' };
//char arr5[] = { 'a','b','c' };
//char arr6[] = "abcdef";
//
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//数组的不完全初始化
//	//计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);//整个数组字节数除以一个元素的字节数 
//	//对数组内容赋值 数组是使用下标来访问的 下标从0开始
//	int i = 0;//当下标 
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	//输出数组的内容
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; ++i)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);//for循环嵌套i j走过整个数组 
//		}
//		printf("\n");//一行打印完换行 
//	}
//	//1 2 3 0
//	//4 5 0 0
//	//0 0 0 0
//	//0 0 0 0
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
//
//#include <stdio.h>
//void bubble_sort(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//	bubble_sort(arr);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//#include<stdio.h>
////双循环 外循环控制排序次数 内循环控制交换次数 
//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序的趟数 n-1次
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//每有一个数有序 交换次数就少一次 
//		{
//			if (arr[j] > arr[j + 1])//如果有序 进入循环后会直接跳出内循环进入下面if语句 最后直接跳出外循环 
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序 
//			}
//		}
//		if (flag == 1)//简化 防止排好序后接着输出循环里的代码 
//		{
//			break;//跳出循环 
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//对arr排序 排成升序 冒泡排序 相邻两个元素比较 交换 最后为升序 
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);//9次冒泡排序 10个元素 实际上传递过去的数组arr首元素的地址 &arr[0] 
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0; //1sizeof (数组名)-数组名表示整个数组 整个数组大萧 
//}             //2&数组名 数组名代表整个数组 &数组名 取出的是整个数组的地址
// //3&arr不要认为是第一个元素的地址 打印结果一样 但含义不同 如果加1 加4*元素个数 