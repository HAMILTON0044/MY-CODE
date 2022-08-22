
#include"game扫雷.cpp"
#include"game扫雷.h"
#include<stdio.h>
void menu()
{
	printf("#####################\n");
	printf("####1.play       ####\n");
	printf("####       0.exit####\n");
	printf("#####################\n");
}

void game()
{
	char mine[ROWS][COLS]={0};//布置好雷的信息 
	char show[ROWS][COLS]={0};//排查出的雷的信息 
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	DisplayBoard(show,ROW,COL);
	SetMine(mine,ROW,COL);
    FindMine(mine,show,ROW,COL);
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出\n");
				break;
			default:
				printf("请重新选择：>");
				break; 
		}
	}while(input); 
}

int main()
{
	test();
	return 0;
} 

