#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"game.h"
void menu()
{
	printf("************************\n");
	printf("**********1.play********\n");
	printf("**********0.exit********\n");
	printf("************************\n");
}
void game()
{
	char mine[ROWS][COLS];//布置好雷的信息
	char show[ROWS][COLS];//存放排查好雷的信息，也是玩家看到的雷区
	//初始化,把初始化内容传进去因为两个数组初始化是不一样的
	InitBoard(mine, ROWS, COLS, '0');//‘0’为无雷，‘1’为有雷，初始化时候先将其初始化为‘0’
	InitBoard(show, ROWS, COLS, '*');//玩家一开始看到的雷区都是*
	//布置雷
	SetMine(mine, ROW, COL, Easy_Count);
	//打印雷区
	Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//排查雷
	FineMine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//随机数播种
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}