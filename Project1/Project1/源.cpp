//#include<stdio.h>
//int main()
//{
	//int n = 8;//const常属性 const int n=8后不能再定义n=9  n为常变量
	//printf("%d\n", n);
	//n = 9;
	//printf("%d\n", n);
	//return 0;
   //int arr[10] = { 0 };//[]中填常量 ，  变量 常变量都不能填
//}

//#define MAX 10  //定义的标识符常量
//int main()
//{	
   // int arr[MAX] = { 0 };
	//printf("%d\n", MAX);
	//return 0;
//}

//枚举常量

//enum SEX
//{
	//MALE,
	//FEMALE,
	//SECRET
//};

//int main()
//{
	//printf("%d\n", MALE);//0
	//printf("%d\n", FEMALE);//1
	//printf("%d\n", SECRET);//2
	//return 0;
//}

//enum COLOR
//{
	//RED,
	//YELLOW,
	//BLUE
//};

/*
int main()
{
	char arr1[] = "abc";//"abc"----'a'，’b','c','\0'
    char arr2[] = { 'a','b','c',0 };//\0值为0   a---97
    ASCII 码值
	printf("%s\n", arr1);//strlen  计算字符串长度arr1----3
	printf("%s\n", arr2);                        arr2----随机数
	return 0;
}
 \t 是一个字符
 */

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗?(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//	    printf("GOOD");
//	else
//		printf("F**K YOU");
//	return 0;
//}
//int main()
//{
//	int line = 0;
//
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	    printf("GOOD");
//	return 0;
//}

//数组下标从0开始 便于访问元素

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//		printf("%d\n", arr[i]);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;//4字节    00000000000000000000000000000001
//	int b = a << 1;//<< 左移一位   00000000000000000000000000000010  二进制  2
//	printf("%d\n", b);//2
//	return 0;
//}

//== 是判断  = 是赋值    a=a+10 完全等价于 a+=10
//sizeof 计算的是变量或类型占空间的大小 字节

//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", !a);//0-假    1-真     ！真变为假  假变为真
//	return 0;
//}

//int main()
//{
//	int a = 101;//  ~ 按位取反
//	int b=~a;
//	printf("%d\n", b);
//	return 0;
	//源码 反码 补码     负数在存储时存储的是二进制的补码   二进制最高位0 1是表示正负
	//100000000000000000000000000001————  -1
	//unsighed int  定义正数

//指针
	 
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	*p = 20;//*解引用操作符
//	printf("a=%d\n", a);
//	printf("%p\n", p);
//	return 0;
//}

//int main()
//{
//	char zf = 'p';
//	char*dz = &zf;
//	*dz = 'o';
//	printf("%c\n", zf);
//    return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>








































































































































































































































































































































































































