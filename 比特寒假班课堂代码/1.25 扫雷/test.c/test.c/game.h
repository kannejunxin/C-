#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//玩家看到的雷区大小
#define ROW 9 //棋盘实际可以存放有用信息的大小
#define COL 9
//实际程序运行的雷区大小
#define ROWS ROW+2//为了防止访问处于边界位置元素的附近8个元素不会有越界问题，在外围再加一圈
#define COLS COL+2

#define Easy_Count 10  //雷的数量


//函数声明
//初始化雷区
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//打印雷区
void Displayboard(char board[ROWS][COLS], int row, int col);
//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col, int count);
//排查雷
void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//统计（x,y)周围有几个雷
int GetMineCount(char mine[ROWS][COLS], int x, int y);
//打开(x,y)周围坐标
void Openround(char mine[ROWS][COLS], char show[ROWS][COLS], int exam[ROWS][COLS], int row, int col, int x, int y);