#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void game()
{
	int guess = 0;

	int rdig = rand()%100;
	while (1)
	{
		printf("��׼���¶��>:");
		(void)scanf("%d", &guess);
		if (guess > rdig)
		{
			printf("�´���\n");
		}
		else if (guess < rdig)
		{
			printf("��С��\n");
		}
		else if (guess == rdig)
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
}