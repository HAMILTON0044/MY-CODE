#include<stdio.h>
/*int main()
{
	//�Ӽ�����λ 
	int a=3;
	int b=5;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d",a,b);
	return 0;
}
int main()
{
	//��� 
	int a=3;
	int b=5;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d %d\n",a,b);
	return 0;
}

int main()
{
	int num=0;
	int count=0;
	scanf("%d",&num);//ͳ��num�Ĳ����м���һ
	while(num)
	{
		if(num%2==1)
		{
			count++;
		}
		num=num/2;
	} 
	printf("%d",count);
	return 0; 
}

int main()
{
	int num=0;
	int count=0;
	scanf("%d",&num);
	int i=0;
	for(i=0;i<32;i++)
	{
		if(1==((num>>i)&1))
		{
			count++;
		}
	}
	printf("%d\n",count);
}*/

int main()
{
	int i=0,a=1,b=2,c=3,d=4;
	
	//i=a++&&++b&&d++;
	i=a++||++b||d++;
	printf("%d\n%d\n%d\n%d\n",a,b,c,d);
} 

















