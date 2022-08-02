
/*int Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}
int main()
{
	int a=0;
	int b=0; 
	printf("输入两个数字");
	scanf("%d%d",&a,&b);
	int sum=Add(a,b);
	printf("a+b=%d",sum);
	return 0;
}

#include<string.h>
int main()
{
	//strcpy-string copy-字符串拷贝
	char arr1[]="bit";
	char arr2[20]="#####";
	strcpy(arr2,arr1);
	printf("%s\n",arr2);
	return 0;
	 
}

#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[]="Sample string";
  char str2[40];
  char str3[40];
  strcpy (str2,str1);
  strcpy (str3,"copy successful"); 
  printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
  return 0;
}

//memset-memory set-内存设置 
#include <string.h>
int main()
{
	char arr[]="HELLO WORLD";
	memset(arr,'*',5);
	printf("%s\n",arr);
	return 0;
} */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Swap1(int x,int y)
{
	int tmp=0;
	tmp=x;
	x=y;
	y=tmp;
}
int main()
{
	int a=0;
	int b=0;
	//int tmp=0;
	scanf("%d%d",&a,&b);
	printf("a=%d,b=%d",a,b);
	//tmp=a;
	//a=b;
	//b=tmp;
	Swap1(a,b);
	printf("a=%d,b=%d",a,b);
	return 0; 
}

/*int main()
{
	int a=0;
	int*pa=&a;
	*pa=20;
	printf("%d",a);
	return 0;
}*/







