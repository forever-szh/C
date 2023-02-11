#define _CRT_SECURE_NO_WARNINGS 1

//fopen
//fwrite
//fclose 
//#include<stdio.h>
//int main()
//{
//	int a=10000;
//	FILE* pf=fopen("test.txt","wb");//二进制的形式写入 
//	fwrite(&a,4,1,pf)//二进制的形式写入文件 1个4个字节的数据放到pf 
//	fclose(pf);
//	pf=NULL; 
//	return 0;
//}
//十六进制10 27 00 00
//反过来  00 00 27 10
//十进制就是10000

#include<stdio.h>
#include<string.h> 
#include<errno.h>
//int main()
//{
//	//打开文件test.txt
//	//其他路径补全就可以 小心\的转义 再加\进行转义
//	//fopen("../test.txt","r");
//	//..表示上一级路径 .表示当前路径 
//	//相对路径 相对于这个代码的路径
//	//绝对路径 打开其他文件 将前面的一长串路径补全	 
//	FILE* pf=fopen("text.txt","r");//"w"写的形式进行打开会建立新的文件 老文件内容销毁 
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读文件
//	//关闭文件 
//	fclose(pf);
//	//值传递不会改变
//	pf=NULL; 
//	return 0;	
//}
//
//int main()
//{
//	FILE* pfWrite=fopen("TEST.txt","w");
//	if(pfWrite==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;	
//	}
//	//写文件
//	fputc('b',pfWrite); 
//	fputc('i',pfWrite); 
//	fputc('t',pfWrite);
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite=NULL;
//	return 0;
//}
//写入bit

int main()
{
	FILE* pfRead = fopen("TEST.txt", "r");
	if (pfRead == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//读文件
	printf("%c", fgetc(pfRead));//b
	printf("%c", fgetc(pfRead));//i
	printf("%c", fgetc(pfRead));//t
	//关闭文件
	fclose(pfRead);
	pfRead = NULL;
	return 0;
}

//从键盘输入
//输出到屏幕
//键盘&屏幕都是外部设备
//键盘-标准输入设备-stdin
//屏幕=标准输出设备-stdout
//是一个程序默认打开的两个流设备
//stdin FILE*
//stdout FILE*
//stderr FILE* 

//int main()
//{
//	int ch=fgetc(stdin);//键盘读入 
//	fputc(ch,stdout);//屏幕输出 
//	return 0;
//}

//int main()
//{
//	char buf[1024]={0};
//	FILE* pf=fopen("text.txt","r");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//	//读文件 
//	//fgets(buf,1024,pf);
//	//放到buf 最多读1024 去pf里读 读一行 
//	//printf("%s\n",buf); 
//	puts(buf);
//	//打印完后自动换行 
//	fclose(pf);
//	pf=NULL; 
//	return 0;
//}

//int main()
//{
//	char buf[1024]={0};
//	FILE* pf=fopen("text.txt","w");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//	//写文件
//	fputs("hello\n",pf);
//	fputs("world\n",pf); 
//	fclose(pf);
//	pf=NULL; 
//	return 0;
//}

//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024]={0};
//	//fgets(buf,1024,stdin);//从标准输入读取
//	//fputs(buf,stdout);//输出到标准输出流 
//	gets(buf);
//	puts(buf);
//	//等价 
//	return 0;
//}


//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//}; 
//
//int main()
//{
//	struct S s={100,3.14,"bit"};
//	FILE* pf=fopen("test.txt","w");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
//	fclose(pf);
//	pf=NULL; 
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s={0};
//	//scanf("%d %f %s",&(s.n),&(s.score),s.arr);
//	//printf("%d %.2f %s",s.n,s.score,s.arr);
//	fscanf(stdin,"%d %f %s",&(s.n),&(s.score),s.arr);
//	fprintf(stdout,"%d %.2f %s",s.n,s.score,s.arr);
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s={100,3.14,"abcdef"};
//	struct S tmp={0};
//	char buf[1024]={0};
//	//把格式化的数据转换成字符串存储到buf 
//	sprintf(buf,"%d %f %s",s.n,s.score,s.arr);
//	printf("%s\n",buf);
//	//从buf中读取格式化的数据到tmp中 
//	sscanf(buf,"%d %f %s",&(tmp.n),&(tmp.score),tmp.arr);
//	printf("%d %f %s\n",tmp.n,tmp.score,tmp.arr);
//	return 0;	
//}

//scanf/printf   是针对标准输入流的格式化输入/输出语句
//fscanf/fprintf 是针对所有输入流的格式化输入/输出语句
//sscanf/sprintf sscanf是从字符串中读取格式化的数据 sprintf是把格式化数据输出成(存储到)字符串


//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s={"张三",20,55.6};
//	FILE* pf=fopen("text.txt","wb");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	fwrite(&s,sizeof(struct S),1,pf);
//	//关闭文件	
//	fclose(pf);
//	pf=NULL; 
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S tmp={0};
//	FILE* pf=fopen("text.txt","rb");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//	//二进制的形式读文件
//	fread(&tmp,sizeof(struct S),1,pf);
//	printf("%s %d %lf\n",tmp.name,tmp.age,tmp.score);
//	//关闭文件	
//	fclose(pf);
//	pf=NULL; 
//	return 0;
//}

//int main()
//{
//	FILE* pf=fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf,2,SEEK_CUR);
//	//SEEK_END从末尾开始算偏移量 偏移量要为负数 
//	//2.读取文件 
//	int ch=fgetc(pf);
//	printf("%c\n",ch);
//	return 0;
//}

//int main()
//{
//	FILE* pf=fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//	fseek(pf,-2,SEEK_END);
//	int pos=ftell(pf);
//	printf("%d\n",pos);
//	//当前相对于起始位置的偏移量是多少
//	rewind(pf);
//	int ch=fgetc(pf);
//	printf("%c\n",ch); 
//	//rewind回到起始位置 
//	return 0;
//}

//int main()
//{
//	//EOF
//	//feof();//EOF-end of file-文件结束标志 
//	FILE* of=fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//	int ch=fgetc(pf);
//	printf("%d\n",ch);//-1 空文件放了一个EOF 
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}

//int main()
//{
//	//strerror-把错误码对应的错误信息的字符串地址返回
//	//printf("%s\n"),strerror(errno));
//	
//	//perror
//	FILE* pf=fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		perror("open file test.txt");//不用头文件 open file test.txt:先输出  
//		return 0; 
//	}
//	//读文件
//	int ch=0;
//	while((ch=fgetc(pf))!=EOF)
//	{
//		putchar(ch);
//	}
//	//读取结束找停止原因 
//	if(ferror(pf))
//	{
//		printf("error\n");
//	}
//	else if(ferror(pf))
//	{
//		printf("end of file\n");
//	}
//	fclose(pf);
//	pf=NULL; 
//	return 0;
//}