#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//符号的定义
#define ROW 9
#define COL 9

//函数的声明
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘的函数
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);



//1.玩家赢了 -*
//2.电脑赢了 -#
//3.平局     -Q
//4.游戏继续 -C

//判断游戏是否有输赢状态
char IsWin(char board[ROW][COL], int row, int col);