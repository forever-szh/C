//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;//指针变量 32位4个字节 64位8个字节 不管字符类型 
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);//加字节数 跳4个字节 
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//跳1个字节 
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	//int* p=arr;//数组名 首元素的地址
//	char* p = arr;//一个字节一个字节跳 跳10个字节 等于跳2个半  
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	//越出数组所有元素后 会越界访问 变为野指针  
//}
//
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &ch[0]);//这样写 未知 指针变量不同 
//	printf("%d\n", &arr[0] - &arr[9]);//指针减去指针等于中间元素个数 
//}
//
//my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr; //指针存放数组首元素的地址
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p   <====> p+%d = %p\n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int* p = arr; //指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}