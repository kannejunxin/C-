#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//��ҿ�����������С
#define ROW 9 //����ʵ�ʿ��Դ��������Ϣ�Ĵ�С
#define COL 9
//ʵ�ʳ������е�������С
#define ROWS ROW+2//Ϊ�˷�ֹ���ʴ��ڱ߽�λ��Ԫ�صĸ���8��Ԫ�ز�����Խ�����⣬����Χ�ټ�һȦ
#define COLS COL+2

#define Easy_Count 10  //�׵�����


//��������
//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//��ӡ����
void Displayboard(char board[ROWS][COLS], int row, int col);
//������
void SetMine(char mine[ROWS][COLS], int row, int col, int count);
//�Ų���
void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//ͳ�ƣ�x,y)��Χ�м�����
int GetMineCount(char mine[ROWS][COLS], int x, int y);
//��(x,y)��Χ����
void Openround(char mine[ROWS][COLS], char show[ROWS][COLS], int exam[ROWS][COLS], int row, int col, int x, int y);