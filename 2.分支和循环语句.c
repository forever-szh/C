//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//int main()
//{
//	int age = 100;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n")
//		return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//        {
//            printf("hehe\n");
//        }
//    }
//    else
//    {
//        printf("haha\n");
//    }
//    return 0;
//}
//打印haha
//else的匹配：else是和它离的最近的未与else匹配的if匹配
//
//判断一个数是否为奇数
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (n % 2 == 1)//模2余1为奇数
//    {
//        printf("odd\n");
//    }
//    return 0;
//}
//
//输出1 - 100之间的奇数
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    while (i <= 100)//循环
//    {
//        printf("%d ", i);//百分号d后面要有空格 不然打印出来的数会连起来 
//        i += 2;
//    }
//}
//
//#include <stdio.h>
//int main()
//{
//    int day = 0;
//    switch (day)
//    {
//        case 1：
//            printf("星期一\n");
//            break;
//        case 2:
//            printf("星期二\n");
//            break;
//        case 3:
//            printf("星期三\n");
//            break;
//        case 4:
//            printf("星期四\n");
//            break;
//        case 5:
//            printf("星期五\n");
//            break;
//        case 6:
//            printf("星期六\n");
//            break;
//        case 7:
//            printf("星期天\n");
//            break;
//    }
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int day = 0;
//    switch (day)
//    {
//        case 1：
//        case 2:
//        case 3:
//        case 4:
//        case 5:
//            printf("weekday\n");
//            break;
//        case 6:
//        case 7:
//            printf("weekend\n");
//            break;
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:m++;
//    case 2:n++;
//    case 3:
//        switch (n)
//        {
//        case 1:n++;
//        case 2:m++, n++; break;
//        }
//    case 4:m++;
//        break;
//    default:
//        break;
//    }
//    printf("m=%d,n=%d\n", m, n);
//    return 0;
//}
//m=5 n=3
//
//打印1 - 10的数字
//#include<stdio.h>
//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        printf("%d ", i);
//        i = i + 1;
//    }
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        if (i == 5)
//            continue;
//        printf("%d ", i);
//        i = i + 1;
//    }
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    //for(i=1/*初始化*/; i<=10/*判断部分*/; i++/*调整部分*/)
//    for (i = 1; i <= 10; i++)
//    {
//        printf("%d ", i);
//    }
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//            break;
//        printf("%d ", i);
//    }
//    return 0;
//}
//当i == 5时跳出循环
//打印1 2 3 4
//
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//            continue;
//        printf("%d ", i);
//    }
//    return 0;
//}
//当i == 5时 会重新开始循环
//但不同于while循环
//continue后i会加1
//不会进入死循环
//最后打印1 2 3 4 6 7 8 9 10
//
//
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        int j = 0;
//        for (j = 0 : j < 10 : j++)
//        {
//            printf("hehe\n");
//        }
//    }
//    return 0;
//}
//最后打印i* j个hehe
//
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    for (; i < 10; i++)
//    {
//        for (:j < 10 : j++)
//        {
//            printf("hehe\n");
//        }
//    }
//    return 0;
//}
//只打印10个hehe
//当i = 0时
//会打印10个hehe
//j变成10
//没有初始化
//所以当i = 2 - 9时
//j一直为10
//不打印
//所以最后只打印10个hehe
//
//#include <stdio.h>
//int main()
//{
//    int x, y;
//    for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}
//可以x y两个变量初始化 判断 还有调整
//最后打印2个hehe
//
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)
//        k++;
//    return 0;
//}
//0次
//注意判断条件说k = 0
//也就是0赋值给k
//整个表达式为假
//所以不进入循环
//
//#include <stdio.h>
//int main()
//{
//    int i = 10;
//    do
//    {
//        printf("%d\n", i);
//    } while (i < 10);
//    return 0;
//}
//打印一次10
//先进入循环
//走完循环后判断
//不成立
//跳出
//
//
//n的阶乘
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    scanf("%d", &n);//n无法定义的时候可scanf打印 
//    for (i = 1; i <= n; i++)
//    {
//        ret = ret * i;//每回赋值打印可实现连乘  
//    }
//    printf("ret=%d\n", ret);
//    return 0;
//}
//
//n的阶乘的和
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    for (n = 1; n <= 10; n++)
//    {
//        ret = ret * n;//直接*n n会自加 相当于阶乘
//        sum = sum + ret;
//    }
//    printf("sum=%d\n", sum);
//    return 0;
//}
//
//二分查找
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 7;
//    int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//    int left = 0;//左下标
//    int right = sz - 1;//右下标
//    while (left <= right)//查找次数大约为log以2为底的n次 
//    {
//        int mid = (left + right) / 2;//mid必须在循环里面 不然进入循环后系统默认无mid值 
//        if (arr[mid] > k)//找到的中间值与最终所找值进行比较 调整左右下标 再查找 
//        {
//            right = mid - 1;
//        }
//        else if (arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            printf("找到了，下标是：%d\n", mid);
//            break;
//        }
//    }
//    if (left > right)
//    {
//        printf("找不到\n");
//    }
//    return 0;
//}
//
//二分查找函数
//int bin_search(int arr[], int left, int right, int key)
//{
//    int mid = 0;
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (arr[mid] > key)
//        {
//            right = mid - 1;
//        }
//        else if (arr[mid] < key)
//        {
//            left = mid + 1;
//        }
//        else
//            return mid;//找到了，返回下标
//    }
//    return -1;//找不到
//}
//
//演示多个字符从两端移动，向中间汇聚
//#include <stdio.h>
//int main()
//{
//    char arr1[] = "welcome to bit...";
//    char arr2[] = "#################";
//    int left = 0;
//    int right = strlen(arr1) - 1;
//    printf("%s\n", arr2);
//    //while循环实现
//    while (left <= right)
//    {
//        Sleep(1000);
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        left++;
//        right--;
//        printf("%s\n", arr2);
//    }
//    //for循环实现
//    for (left = 0, right = strlen(src) - 1; left <= right; left++, right--)
//    {
//        Sleep(1000);
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", target);
//    }
//    return 0;
//}
//
//编写代码实现，模拟用户登录情景，并且只能登录三次。
//只允许输入三次密码，如果密码正确则 提示登录成，如果三次均输入错误，则退出程序。
//int main()
//{
//    char psw[10] = "";
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 3; ++i)
//    {
//        printf("please input:");
//        scanf("%s", psw);
//        if (strcmp(psw, "password") == 0)
//            break;
//    }
//    if (i == 3)
//        printf("exit\n");
//    else
//        printf("log in\n");
//}
//
//关机程序
//#include <stdio.h>
//int main()
//{
//    char input[10] = { 0 };
//    system("shutdown -s -t 60");
//again:
//    printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
//    scanf("%s", input);
//    if (0 == strcmp(input, "我是猪"))
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto again;
//    }
//    return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////猜数字游戏
////1电脑会生成一个随机数
////2猜数字 
//void menu()
//{
//    printf("******************************\n");
//    printf("***    1.play     0.exit   ***\n");
//    printf("******************************\n");
//}
//void game()
//{
//    //1生成一个随机数
//    //2猜数字
//    int ret = 0;//拿时间戳来设置随机数的生成起点 time函数 放主函数里面 设置一次起点即可 
//    int guess = 0;//时间戳 当前计算机的时间减去计算机的起始时间1970 1.1 00.00.00=(xxxx)秒  
//    ret = rand() % 100 + 1;//生成随机数 0=32767之间 最好生成1-100随机数 
//    while (1)
//    {
//        printf("请猜数字(0-100):>");
//        scanf("%d", &guess);
//        if (guess > ret)
//        {
//            printf("猜大啦嘿嘿嘿\n");
//        }
//        else if (guess < ret)
//        {
//            printf("猜小啦嘿嘿嘿\n");
//        }
//        else
//        {
//            printf("你真好看，恭喜你，猜对啦\n");
//            break;
//        }
//    }
//}
//
//猜数字游戏
//int main()
//{
//    int input = 0;
//    srand((unsigned int)time(NULL));
//    do
//    {
//        menu();
//        printf("请选择(1开始 0结束)>:");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            game();
//            break;
//        case 0:
//            printf("退出游戏\n");
//            break;
//        default:
//            printf("选择错误\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}