#pragma once

#include<stdio.h>


//符号的定义
#define ROW 9
#define COL 9

//函数的声明
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘的函数
void DisplayBoard(char board[ROW][COL], int row, int col);