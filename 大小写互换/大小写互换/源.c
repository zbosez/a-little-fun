#define _CRT_SECURE_NO_WARNINGS 1
//KiKi�������ĸ��Сдת������һ���ַ����ж����Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ����֮��ת��Ϊ��д��ĸ��
//�������� :
//�������룬ÿһ������һ����ĸ��
//������� :
//���ÿ�����룬�������ռһ�У������ĸ�Ķ�Ӧ��ʽ��
#include<stdio.h>
int main()
{

	char ch='a';
	while (scanf("%c", &ch) !=EOF)
	{
		if (ch >90)
		{
			ch -= 32;
		}
		else if (ch <= 90)
		{
			ch += 32;
		}
		printf("%c\n", ch);
		getchar();
	}
	return 0;
}