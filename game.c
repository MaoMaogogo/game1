#pragma once

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

void DisplayBoard(char board[ROW][COL], int row, int col)
{

}