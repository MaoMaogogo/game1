#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("***********************************************\n");
	printf("************        1.play      ***************\n");
	printf("************        0.exit      ***************\n");
	printf("***********************************************\n");
}


int main()
{
	int input = 0;
	do
	{
		meuu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			break;
		case 2:
			break;
		default:
			printf("请重新选择\m");
			break;
		}
	} while(input);
	return 0;
}