#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//��ʼ������
void initchessboard(char chess[ROW][COL])
{
	int col = 0;
	int row = 0;
	for (row = 0;row < ROW;row++)
	{
		for (col = 0;col < COL;col++)
		{
			chess[row][col] = ' ';
		}
	}
	
}
//չʾ����
void displaychessboard(char chess[ROW][COL])
{
	int row = 0;
	int col = 0;
	for (row = 0;row < ROW ; row++)
	{
		for (col = 0;col < COL;col++)
		{
			printf(" %c ", chess[row][col]);
			if (col != COL - 1)//����Ϊ�˲���ӡ����|
			{
				printf("|");
			}
		}
		printf("\n");
		if (row != ROW - 1)//�����Ϊ�˲���ӡ���ķָ���
		{
			for (col = 0;col < COL;col++)
			{
				printf("---");
				if (col != COL - 1)//����Ϊ�˲���ӡ����|
					printf("|");
			}
			printf("\n");
		}
	}
}

//�������,@
void playermove(char chess[ROW][COL])
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("�������,��������������>:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (chess[x - 1][y - 1] == ' ')
			{
				chess[x - 1][y - 1] = '@';
				break;
			}
			else
			{
				printf("�����ѱ�ռ�ã�����������");
			}
		}
		else
		{
			printf("�������벻�Ϲ棬����������\n");
		}
	}
}
//��������
void computermove(char chess[ROW][COL])
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("��������>:\n");
		x = rand(time) % 3;
		y = rand(time) % 3;
		if (chess[x][y] == ' ')
		{
			chess[x][y] = '*';
			break;
		}
	}
}
//�жϽ��
char judgewinner(char chess[ROW][COL])
{
	int flag = 0;
	int row = 0;
	int col = 0;
	for (row = 0;row < ROW;row++)
	{
		if (chess[row][0] == chess[row][1] && chess[row][1] == chess[row][2] && chess[0][0] != ' ')
		{
			if (chess[row][0] == '@')
				return '@';
			else if (chess[row][0] == '*')
				return '*';
		}
	}
	for (col = 0;col < COL;col++)
	{
		if (chess[0][col] == chess[1][col] && chess[2][col] == chess[1][col] && chess[1][col] != ' ')
		{
			if (chess[0][col] == '@')
				return '@';
			else if (chess[0][col] == '*')
				return '*';
		}
	}
	if (chess[0][0] == chess[1][1] && chess[2][2] == chess[1][1] && chess[2][2] != ' ' || chess[0][2] == chess[1][1] && chess[1][1] == chess[2][0] && chess[2][0] != ' ')
	{
		if (chess[0][0] == '@')
			return '@';
		else if (chess[0][0] == '*')
			return '*';
	}
	//�ж�������û����
	for (row = 0;row < ROW;row++)
	{
		for (col = 0;col < COL;col++)
		{
			if (chess[row][col] == ' ')
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			return'c';
		}
	}
	if (flag == 0)
	{
		return 'q';
	}
}

void game()
{
	char ret;
	char chess[ROW][COL];
	initchessboard(chess);
	displaychessboard(chess);
	while (1)
	{
		playermove(chess);
		displaychessboard(chess);
		printf("\n");
		ret = judgewinner(chess);
		if (ret != 'c')
			break;
		computermove(chess);
		displaychessboard(chess);
		ret = judgewinner(chess);
		if (ret != 'c')
			break;
		system("cls");
		displaychessboard(chess);
	}
	system("cls");
	if (ret == '@')
		printf("��ϲ�㣡����Ӯ����\n");
	else if (ret == '*')
		printf("����Ӯ�ˣ��ٽ�����\n");
	else if (ret == 'q')
		printf("ƽ�֣�����һ�ΰ�\n");
	displaychessboard(chess);
}