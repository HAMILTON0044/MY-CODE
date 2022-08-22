
#include<stdio.h>
#include"game扫雷.h"
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set)
{
	int i=0;
	int j=0;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			board[i][j]=set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<=col;i++)
	{
		printf("%d ",i);
	} 
	printf("\n");
	for(i=1;i<=row;i++)
	{
		printf("%d ",i);
		for(j=1;j<=col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS],int row,int col)
{
	int count=EASY;
	while(count)
	{
		int x=rand()%row+1;
		int y=rand()%row+1;
		if(board[x][y]=='0')
		{
			board[x][y]='1';
			count--;
		}
	}
}
int GetMineCount(char mine[ROWS][COLS],int x,int y)
{
	return 
	mine[x-1][y]+mine[x-1][y-1]+
	mine[x-1][y+1]+mine[x][y-1]+
	mine[x][y+1]+mine[x+1][y-1]+
	mine[x+1][y]+mine[x+1][y+1]-8*'0';
}
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int x=0;
	int y=0;
	while(1)
	{
		printf("请输入排查雷的坐标:>");
	    scanf("%d%d",&x,&y);
	    if(x>=1&&x<=row&&y>=1&&y<=col)//坐标合法 
	    {
		    if(mine[x][y]=='1')
		    {
		    	printf("BOOM!\n");
		    	DisplayBoard(mine,row,col);
				break; 
			}
		    else//不是雷 计算周围雷数量
		    {
			    int count=GetMineCount(mine,x,y);
			    show[x][y]=count+'0';
			    DisplayBoard(show,row,col); 
		    } 
		}
	    else
	    {
		    printf("输入错误\n"); 
	    } 
	} 
	 
}





















