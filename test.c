#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"



void menu()
{
	printf("**********************************************\n");
	printf("************       1.play      ***************\n");
	printf("************       0.exit      ***************\n");
	printf("**********************************************\n");
}

void game()
{
	//�洢���� - ��ά����
	char board[ROW][COL];
	//��ʼ������ - ��ʼ���ո�
	InitBoard(board, ROW, COL);
	//��ӡһ������ - �����Ǵ�ӡ���������
	DisplayBoard(board��ROW��COL);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������ѡ��\m");
			break;
		}
	} while(input);
	return 0;
}