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
	char mine[ROWS][COLS];//���ú��׵���Ϣ
	char show[ROWS][COLS];//����Ų���׵���Ϣ��Ҳ����ҿ���������
	//��ʼ��,�ѳ�ʼ�����ݴ���ȥ��Ϊ���������ʼ���ǲ�һ����
	InitBoard(mine, ROWS, COLS, '0');//��0��Ϊ���ף���1��Ϊ���ף���ʼ��ʱ���Ƚ����ʼ��Ϊ��0��
	InitBoard(show, ROWS, COLS, '*');//���һ��ʼ��������������*
	//������
	SetMine(mine, ROW, COL, Easy_Count);
	//��ӡ����
	Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//�Ų���
	FineMine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//���������
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}