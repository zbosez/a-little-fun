#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
extern void menu();
extern void game();
int main()
{
	menu();
	printf("��ѡ��>:");
	srand((unsigned int)time(NULL));
	do
	{
		int sf = 0;
		scanf("%d", &sf);
		switch (sf)
		{	
			case 1:
			{
				game();
				menu();
				printf("��ѡ��>:");
				break;
			}
			case 0:
			{
				printf("�˳���Ϸ\n");
				break;
			}
			default:
			{	
				printf("��������ȷ��ֵ\n");
				printf("��ѡ��>:");
				break;
			}
		}
	} while (1);
	return 0;
}