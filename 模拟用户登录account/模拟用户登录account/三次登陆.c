#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr1[20] = { 0 };
	char password[20] = "1234zzz";//����password�� 1234zzz	
	char qr[2] = "";
	int i = 0;
	for (i = 0;i <= 3;i++)
	{
		printf("��������������>:");
		scanf("%s", arr1);
		printf("��ȷ��(Y/N)>:");
		scanf("%s", qr);
		if (strcmp(qr, "Y") == 0)
		{
			if (strcmp(password, arr1) == 0)
			{
				printf("������ȷ");
				break;
			}
			else if (strcmp(password, arr1) != 0)
			{
				printf("�������������");
			}
		}
		else
			printf("������");
	}
	if (i == 4)
		printf("���ξ��������Ϊ��֤�˻���ȫ����1min������");	
	return 0;
}

