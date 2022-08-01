#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[20]={0};
	system("shutdown -S -t 30");
again:
	printf("请注意，你的电脑将在三十秒后关机，如果输入:我是只喵咪 可取消关机\n请输入:>");
	scanf("%s",input) ;
	if(strcmp(input,"我是只猫咪")==0)
	{
		system("shutdown -a"); 
    }
    else
	{
		goto again;
	}
	return 0;
}



