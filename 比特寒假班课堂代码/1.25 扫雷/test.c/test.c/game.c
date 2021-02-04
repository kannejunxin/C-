#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//��ʼ�������ĺ���
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
//��ӡ�����ĺ���
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------ɨ����Ϸ------------\n");
	for (i = 0; i <= col; i++)//�����к� ��0~9
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)//֮���Դ�1��ʼ������Ϊ�±�0������ΧһȦ���������Ϣ��
	{
		printf("%d ", i);//�����к� ��1~9
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----------ɨ����Ϸ------------\n");
}
//�����������׵ĺ���
void SetMine(char mine[ROWS][COLS], int row, int col, int count)
{
	while (count)
	{
		//�������1~9
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//�Ų��׵ĺ���
void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i, j,win;
	int exam[ROWS][COLS] = { 0 };
	while (1)
	{
		printf("������Ҫ�Ų������:>");
		int x = 0;
		int y = 0;
		scanf("%d%d", &x, &y);
		//1.�ж�����Ϸ���	
		//2.�������Ƿ�Ϊ�ף������ǣ�ͳ����Χ�׸���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("�����������룬����������\n");
				continue;
			}
			if (mine[x][y] == '1')
			{
				printf("���ź����������\n");
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
			printf("����Ƿ������������룡\n");
		}
		if (win==Easy_Count)
		{
			printf("��ϲ����ʤ��\n");
			break;
		}
	}
}
//ͳ�ƣ�x,y)��Χ�м�����,��Ҳ��ʾ�ַ���'0'��'1'�ĺô�
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x - 1][y + 1] + mine[x + 1][y] + mine[x + 1][y - 1] + mine[x + 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] - 8 * '0';
}
//��(x,y)��Χ����
void Openround(char mine[ROWS][COLS], char show[ROWS][COLS], int exam[ROWS][COLS], int row, int col, int x, int y)
{
	int count = 0;
	if (x == 0 || y == 0 || x > row || y > col)
		return;
	count = GetMineCount(mine, x, y);
	show[x][y] = count + '0';//��������ַ�

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