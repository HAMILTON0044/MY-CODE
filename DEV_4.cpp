#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[20]={0};
	system("shutdown -S -t 30");
again:
	printf("��ע�⣬��ĵ��Խ�����ʮ���ػ����������:����ֻ���� ��ȡ���ػ�\n������:>");
	scanf("%s",input) ;
	if(strcmp(input,"����ֻè��")==0)
	{
		system("shutdown -a"); 
    }
    else
	{
		goto again;
	}
	return 0;
}



