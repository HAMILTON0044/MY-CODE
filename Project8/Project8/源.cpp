


//int main()
//{
//	int s = 1;
//	int t = 1;
//	int n = 0;
//	int i = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (t = 1; t <= i; t++)
//		{
//			s = s * t;
//		}
//		sum = sum + s;
//		s = 1;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	
//
//	while (left<=right)
//	{
//	    int mid = (left + right) / 2;	
//	    if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<windows.h>

int main()
{
	char arr1[] = "Welcome to CHENGDU!!!!!";
	char arr2[] = "#######################";
	int left = 0;//左下标
	int right = strlen(arr1) - 1;
    while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(100);//停留零点一秒
		if (left == right)
			break;
		else
		{
			system("cls");//system 执行系统命令的一个函数  cls 清空屏幕
			left++;
			right--;
		}
	}
	return 0;
}

//==不能判断两个字符串相等  要使用库函数strcmp  #include<stdlib>