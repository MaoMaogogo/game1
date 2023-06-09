#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i=0;i<row;i++)
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
}
//
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if (i < row - 1)
//			printf("---|---|---\n");
//	}
//}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");

		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}

	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家走:>");
		printf("请输入下棋坐标:>");
		scanf("%d %d", &x,&y);
		//判断坐标合法性

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//下棋
			//判断坐标是否被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] ='*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法，请输入\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:>\n");
	while (1)
	{
		int x = rand() % row;//随机函数,限制范围<row
		int y = rand() % col;

		//判断占用
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

char IsFulle(char board[][COL],int row,int col) 
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col)
{
	//int i = 0;
	//int j = 0;
	////判断三行
	//for (i = 0; i < row; i++)
	//{
	//	if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
	//	{
	//		return board[i][1];
	//	}
	//}
	////判断三列
	//for (i = 0; i < row; i++)
	//{
	//	if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
	//	{
	//		return board[i][1];
	//	}
	//}

	////判断对角
	//if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	//{
	//	return board[1][1];
	//}
	//if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	//{
	//	return board[1][1];
	//}



	int i = 0;
	int j = 0;
	//判断三行
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j + 1] != ' ')
				return board[i][j + 1];
		}
	}
	//判断三列
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[j][i] == board[j+1][i] && board[j+1][i] == board[j+2][i] && board[j+1][i] != ' ')
				return board[j+1][i];
		}
	}

	//判断对角
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == board[i+1][j + 1] && board[i+1][j + 1] == board[i+2][j + 2] && board[i+1][j + 1] != ' ')
				return board[i+1][j + 1];
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 2; j < col; j++)
		{
			if (board[i+2][j+2] == board[i+1][j + 1] && board[i+1][j + 1] == board[i][j ] && board[i+1][j + 1] != ' ')
				return board[i+1][j + 1];
		}
	}



	//判断平局
	int ret = IsFulle(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	return 'C';

}