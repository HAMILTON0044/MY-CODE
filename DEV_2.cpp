#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*int main()
{
	int y=0;
	for(y=1000;y<=2000;y++)
	{
		if(((y%4==0) && (y%100!=0))||(y%400==0) )//&&表示 “或”||表示“且” 
		{
			printf("%d ",y);
		}
		
	}
	return 0;
}*/ 

/*int main()
{
	int i=0;
	for(i=100;i<=200;i++)
	{
		int j=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j==i)
		{
			printf("%d  ",i);
		}
	}
	return 0;
}*/                                                       
/*int main()
{
	int i=0;
	double sum=0.0;
	int flag=1;
	for(i=1;i<=100;i++)
	{
		sum+=flag*1.0/i;
		flag=-flag;//计算1/1-1/2+1/3-1/4.....-1/100= 
	}
	printf("%lf\n",sum);
	return 0;
}*/
/*int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int max=arr[0];
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("%d",max);
	return 0;
}*/
int main()
{
	int i=0;
	for(i=1;i<=9;i++)//打印九行
	{
		int j=1;
		for(j=1;j<=i;j++) //j控制 列 
		{
			printf("%d*%d=%2d ",i,j,i*j); 
		} 
	    printf("\n");
	} 
	return 0;
}

















