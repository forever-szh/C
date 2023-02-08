#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<string.h>
/*int main()
{
	char arr[]="abcdef";
	int len=strlen(arr);
	printf("len=%d\n",len);
	return 0;
} */
/*int my_strlen(const char* str)//库里面返回类型是size_t 其实也就是unsigned int无符号整型
{
	int count=0;
	assert(str!=NULL);
	while(*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	int len=my_strlen("abcdef");
	printf("%d\n",len);
	return 0;
}*/
//6 
//拿a的地址一直数 找到\0停止
//int length=char arr[]={'a','b','c','d','e','f'};
//printf("%d\n",length); 
//一直往后找\0 随机值
/*if((strlen("abc")-strlen("abcdef"))>0)//小心返回类型
{
	printf("hehe\n");
}
else//写int不会出现这种错误 size_t可以保证结果不为负数 各有利弊
{
	printf("haha\n");
}
return 0;
}*/
/*int main()
{
	char arr1[]="abcdef";
	char arr2[]="bit";
	strcpy(arr1,arr2);
	printf("%s\n",arr1);
	return 0;
} */

/*char* my_strcpy(char* dest,const char* src)
{
	assert(dest!=NULL);
	assert(src!=NULL);
	char* ret=dest;
	//拷贝src指向的字符串到dest指向的空间 包含'\0'
	//while(*src!='\0')
	//{
	//	*dest=*src;//b放到a上
	//	dest++;
	//	src++;
	//}
	//*dest=*src//'\0'
	//简化
	while(*dest++=*src++)
	{
		;
	}
	//赋值的同时往后走 当\0赋值的时候  \0的ascii码值为0 表达式为假 跳出循环
	return ret;
	//返回目的空间的起始地址
}
int main()
{
	char arr1[]="abcdef";//arr1元素个数大于arr2
	//char arr1[]="abcdefghi"//这是常量字符串 改变不了 错误
	char arr2[]="bit";
	//char arr2[]={'b','i','t'}错误 无\0
	my_strcpy(arr1,arr2);
	//第一个参数目的地地址 第二个参数是源头
	//为了copy后只打印bit 要把\0放到d的位置
	printf("%s\n",arr1);
	return 0;
}*/

/*char* my_strcat(char* dest,const char* src)
{
	char* ret=dest;
	assert(dest!=NULL);
	assert(src);
	//1.找到目的字符串的'\0'
	while(*dest!='\0')
	{
		dest++;
	}
	//2.追加
	while(*dest++=*src++)
	{
		;
	}
	return ret;
}
int main()
{
	//char arr1[30]="hello\0xxxxxxx";//有x变为\0 说明是追加过去的\0
	char arr1[30]="hello";
	char arr2[]="world";//arr2里面也要有\0 因为arr2的\0可以追加过去
	//strcat(arr1,arr2);//不具体规定元素个数的追加 空间过小不行 arr1元素个数变成30
	my_strcat(arr1,arr2);
	printf("%s\n",arr1);
	return 0;
}*/

/*int my_strcmp(const char* str1,const char* str2)//比较 不希望改变
{
	assert(str1&&str2);
	//比较
	while(*str1==*str2)
	{
		if(*str1=='\0')
		{
			return 0;//相等
		}
		str1++;
		str2++;
	}
	//if(*str1>*str2)
	//	return 1;
	//else
	//	return -1;
	return (*str1-*str2);
}
int main()
{
	//char* p1="abcdef";
	//char* p2="sqwer";
	//int ret=strcmp(p1,p2);
	//比较的是字符的ASCII码值 相同接着往下比较
	//printf("%d\n",ret);//编译器不同 得到的结果不同 因此写判断条件的时候写>0 <0 =0
	if(ret>0)
	{
		printf("p1>p2\n");
	}
	else if(ret<0)
	{
		printf("p1<p2\n");
	}
	else
	{
		printf("p1=p2\n");
	}
	//char* p1="abcdef";
	//char* p2="abqwe";
	//int ret=my_strcmp(p1,p2);
	//printf("ret=%d\n",ret);
	//return 0;
}*/

/*int main()
{
	//char arr1[10]="abcdef";
	//char arr2[]="hello bit";
	//strncpy(arr1,arr2,4);//增加个数 相对安全 只copy4个
	//char arr1[10]="abcdef";
	//char arr2[]="bit";
	//strncpy(arr1,arr2,6);//长度过长 不够 剩下用\0填充
	char arr1[10]="abcdef";
	char arr2[]="bit";
	strncpy(arr1,arr2,6);
	//尝试自定义实现
	return 0;
 }*/

 /*int main()
 {
	 char arr1[30]="hello\0xxxxxxxx";//追加完之后会主动放\0
	 char arr2[]="world";
	 strncat(arr1,arr2,3);//追加个数过多 加完后再补一个\0就不管了
	 //尝试自定义实现
	 printf("%s\n",arr1);
	 return 0;
 }*/

 /*int main()
 {
	 const char* p1="abcdef";
	 const char* p2="abcqwer";
	 //int ret=strcmp(p1,p2);
	 int ret=strncmp(p1,p2,3);//比较前3个 返回0 比较前4个 返回负数
	 printf("%d\n",ret);
	 if(ret>0)
	 {
		 printf("p1>p2\n");
	 }
	 else if(ret<0)
	 {
		 printf("p1<p2\n");
	 }
	 else
	 {
		 printf("p1=p2\n");
	 }
	 return 0;
 }*/

 //strstr-查找子字符串
 //NULL-空指针 NUL/Null-\0

 //int main()
 //{
 //	char *p1="abcdefghi";
 //	char *p2="def";
 //	char *ret=strstr(p1,p2);
 //	//出现两次的话会返回第一次出现的首字符地址 
 //	//返回的是子串首字符地址 
 //	if(ret==NULL)
 //	{
 //		printf("子串不存在");
 //	}
 //	else
 //	{
 //		printf("%s\n",ret);//打印defghi 
 //	}
 //	return 0;
 //}

 //KMP算法 
 /*char* my_strstr(const char* p1,const char* p2)
 {
	 assert(p1!=NULL);
	 assert(p2!=NULL);
	 char *s1=p1;
	 char *s2=p2;
	 char *cur=p1;//如果用p1和p2走的话 不能记住原始地址 返回地址 而且会遇到特殊情况
	 if(*p2=='\0')//特殊情况:abbbcdef bbc 这样的话 无法找出来 所以创建第三第四个指针 进行遍历
	 {
		 return (char*)p1;
	 }
	 while(*cur)
	 {
		 s1=cur;//s1需要回来 再次进行遍历
		 s2=(char*)p2;
		 while(*s1&&*s2&&(*s1==*s2))//*s1 *s2!='\0'
		 {
			 s1++;
			 s2++;
		 }
		 if(*s2=='\0')
		 {
			 return cur;//找到子串
		 }
		 if(*s1=='\0')
		 {
			 return NULL;//当s1字符数量<s2字符数量 提前终止
		 }
		 cur++;
	 }
	 return NULL;//找不到子串
 }
 int main()
 {
	 char *p1="abbbcdef";
	 char *p2="bbc";
	 char *ret=my_strstr(p1,p2);
	 if(ret==NULL)
	 {
		 printf("子串不存在");
	 }
	 else
	 {
		 printf("%s\n",ret);//打印defghi
	 }
	 return 0;
 } */

 /*int main()
 {
	 //192.168.31.121
	 //192.168.31.121-strtok
	 //zpw@bitedu.tech
	 //zpw bitedu tech
	 char arr[]="zpw@bitedu.tech";
	 char*p="@.";
	 //会把@和.改成\0 然后从起始字符开始打印
	 char buf[1024]={0};
	 strcpy(buf,arr);
	 char* ret=NULL;
	 for(ret=strtok(arr,p);ret!=NULL;ret=strtok(NULL,p))//以后总传空指针
	 {
		 printf("%s\n",ret);
	 }
	 //会记住上次改成\0的位置 下次从后面开始 类似于static
	 //切割buf中的字符串 切割不了会返回空指针
	 return 0;
 }*/

 /*#include<errno.h>
 int main()
 {
	 //错误码-错误信息
	 //0     -No error
	 //1     -Operation not permitted
	 //2     -No such file or directory
	 //3 4 5等也有
	 //errno是一个全局的错误码的变量
	 //当C语言的库函数在执行过程中 发生了错误 就会把对应的错误码 赋值到errno中
	 //char*str=strerror(errno);//把错误码翻译成错误信息
	 //printf("%s\n",str);
	 //打开文件
	 FILE* pf=fopen("test.txt","r");
	 if(pf==NULL)
	 {
		 printf("%s\n",strerror(errno));
	 }
	 else
	 {
		 printf("open file success\n");
	 }
	 return 0;
 }*/

 /*#include<ctype.h>
 int main()
 {
	 //char ch='w';
	 //int ret=islower(ch);//判断是不是小写 小写就返回非0 大写就返回0
	 //printf("%d\n",ret);
	 //char ch=tolower('Q');//大写变小写 如果小写的话就不变
	 //char ch=toupper('q');//小写变大写
	 //putchar(ch);
	 //大写全部变小写
	 /*char arr[]="I Am A Student";
	 int i=0;
	 while(arr[i])
	 {
		 if(isupper(arr[i]))
		 {
			 arr[i]=tolower(arr[i]);
		 }
		 i++;
	 }
	 printf("%s\n",arr);
	 return 0;
 }*/

 /*#include<assert.h>
 struct S
 {
	 char namr[20];
	 int age;
 };

 void* my_memcpy(void* dest,const void* src,size_t num)
 {
	 void* ret=dest;
	 assert(dest!=NULL);
	 assert(src!=NULL);
	 while(num--)
	 {
		 *(char*)dest=*(char*)src;
		 ((char*)dest)++;//强转之后再加加 前置加加会报错 可能是编译器原因
		 ((char*)src)++;
	 }
	 return ret;//返回起始地址
 }

 /*int main()
 {
	 int arr1[]={1,2,3,4,5};
	 int arr2[5]={0};
	 struct S arr3[]={{"张三",20},{"李四",30}};
	 struct S arr4[3]={0};
	 //memcpy(arr2,arr1,sizeof(arr1));//整型数组的copy
	 //memcpy(arr4,arr3,sizeof(arr3));//结构体的copy
	 //第一个参数为存放copy的起始地址 第二个参数为要copy的起始地址 第三个参数是要copy数组的字节大小
	 my_memcpy(arr4,arr3,sizeof(arr3));
	 my_memcpy(arr2,arr1,sizeof(arr1));
	 return 0;
 }*/
 //C语言标准要求:
 //memcpy 只要处理不重叠的内容copy就可以
 //memmove 处理重叠内存的copy

 /*void* my_memmove(void* dest,void* src,size_t num)
 {
	 void* ret=dest;
	 assert(dest!=NULL);
	 assert(src!=NULL);
	 if(dest<src)
	 {
		 //前->后
		 while(count--)
		 {
			 *(char*)dest=*(char*)src;
			 ((char*)dest)++;
			 ((char*)src)++;
		 }
	 }
	 else
	 {
		 //后->前
		 while(count--)
		 {
			 *((char*)dest+count)=*((char*)src+count);
		 }
		 return ret;
	 }
	 //或者
	 /*if(dest<src||dest>(char*)src+count)
	 {
		 //前-后
	 }
	 else
	 {
		 //后-前
	 } */
	 /*}
	 //头文件string.h
	 int main()
	 {
		 //1 2 3 4 5拷贝到3 4 5 6 7
		 int arr[]={1,2,3,4,5,6,7,8,9,10};
		 //my_memcpy(arr+2,arr,20);//源头和目的地在同一空间 会重叠 copy不成功
		 //memcpy(arr+2,arr,20);//库里面可以实现 库里面memcpy和memmove是一样的效果
		 //memmove(arr+2,arr,20);//处理重叠状态
		 my_memmove(arr+2,arr,20);
		 int i=0;
		 for(i=0;i<10;i++)
		 {
			 printf("%d ",arr[i]);
		 }
		 return 0;
	 } */

	 /*int main()
	 {
		 int arr1[]={1,2,3,4,5};
		 int arr2[]={1,2,5,4,3};
		 int ret=memcmp(arr1,arr2,9);
		 printf("%d\n",ret);
		 return 0;
	 } */

	 //memset-内存设置

	 //int main()
	 //{
	 //	char arr[10]="";
	 //	memset(arr,'#',10);
	 //	//全部改成# 
	 //	//int arr[10]={0};
	 //	memset(arr,1,10); 
	 //	//最后一个参数是10个字节的意思
	 //	//改成01 01 01 01 01 01 01 01 01 01 00 00 00 00
	 //	//相当于结果是01 01 01 01十六进制变为十进制
	 //	//错误写法 
	 //	return 0;
	 //}