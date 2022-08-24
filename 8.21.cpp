#include<stdio.h>
/*int main()
{
	char a=3;//00000011  
	char b=127;//01111111
	char c=a+b;
	printf("%d\n",c);
	return 0;
} 


int main()
{
	int a=10;
	int*p=&a;
	printf("%",*p);
}

int main()
{
	printf("%d\n",sizeof(char*));printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(int*));printf("%d\n",sizeof(double*));
}
*/
int main()
{
	int a=0x11223344;
	int*pa=&a;
	
	printf("%p",pa);
}






