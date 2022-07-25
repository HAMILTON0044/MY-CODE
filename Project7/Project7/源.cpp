//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//
//	return 0;
//
//}

//int main()
//{
//	int i = 10;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//
//	} while (i < 10);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int s = 1;
//	printf("请输入：>");
//	scanf("%d", &n);
//	int q = n;
//	while (n > 0)
//	{
//		s = s * n;
//		n--;
//	}
//	printf("%d！=%d",q,s);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int s = 1;
//	printf("请输入：>");
//	scanf("%d", &n);
//	int q = n;
//	while (n > 0)
//	{
//		s = s * n;
//		n--;
//	}
//	printf("%d！=%d",q,s);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 3;
	int ch = 0;
	int key = 287365;
	while (i > 0)
	{
		i--;
		printf("请输入密码:>");
	    scanf("%d",&ch);
		if (ch == key)
		{
			printf("密码正确");
			break;
		}
		else if (i != 0)
		{
			printf("密码错误，您还有%d次机会", i);
			continue;
		}
		else if (i == 0)
		{
			printf("谢谢惠顾");
			break;
		}
     }   
	return 0;
}
