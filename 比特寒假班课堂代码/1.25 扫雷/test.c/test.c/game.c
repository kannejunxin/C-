#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//初始化雷区的函数
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
//打印雷区的函数
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------扫雷游戏------------\n");
	for (i = 0; i <= col; i++)//设置列号 从0~9
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)//之所以从1开始，是因为下标0是最外围一圈，不存放信息的
	{
		printf("%d ", i);//设置行号 从1~9
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----------扫雷游戏------------\n");
}
//在雷区布置雷的函数
void SetMine(char mine[ROWS][COLS], int row, int col, int count)
{
	while (count)
	{
		//随机生成1~9
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//排查雷的函数
void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i, j,win;
	int exam[ROWS][COLS] = { 0 };
	while (1)
	{
		printf("请输入要排查的坐标:>");
		int x = 0;
		int y = 0;
		scanf("%d%d", &x, &y);
		//1.判断坐标合法性	
		//2.该区域是否为雷？若不是，统计周围雷个数
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("该坐标已输入，请重新输入\n");
				continue;
			}
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你踩雷了\n");
				Displayboard(mine, row, col);
				break;
			}
			else
			{
				win = 0;
				Openround(mine, show, exam, ROW, COL, x, y);
				Displayboard(show, row, col);
				for (i = 1; i <= row; i++)
				{
					for (j = 1; j <= col; j++)
					{
						if (show[i][j] == '*')
						{
							win++;
						}
					}
				}
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
		if (win==Easy_Count)
		{
			printf("恭喜你获得胜利\n");
			break;
		}
	}
}
//统计（x,y)周围有几个雷,这也显示字符放'0'，'1'的好处
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1] + mine[x + 1][y] + mine[x + 1][y - 1] + mine[x + 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] - 8 * '0';
}
//打开(x,y)周围坐标
void Openround(char mine[ROWS][COLS], char show[ROWS][COLS], int exam[ROWS][COLS], int row, int col, int x, int y)
{
	int count = 0;
	if (x == 0 || y == 0 || x > row || y > col)
		return;
	count = GetMineCount(mine, x, y);
	show[x][y] = count + '0';//存放数字字符

	if( show[x][y]=='0' && exam[x][y]==0)
	{
		exam[x][y] = 1;
		Openround(mine, show, exam, ROW, COL, x - 1, y - 1);
		Openround(mine, show, exam, ROW, COL, x - 1, y);
		Openround(mine, show, exam, ROW, COL, x - 1, y + 1);
		Openround(mine, show, exam, ROW, COL, x, y - 1);
		Openround(mine, show, exam, ROW, COL, x, y + 1);
		Openround(mine, show, exam, ROW, COL, x + 1, y - 1);
		Openround(mine, show, exam, ROW, COL, x + 1, y);
		Openround(mine, show, exam, ROW, COL, x + 1, y + 1);
	}
	else
	{
		return;
	}
}