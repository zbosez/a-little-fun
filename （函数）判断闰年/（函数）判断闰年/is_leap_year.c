#define _CRT_SECURE_NO_WARNINGS 1
//�жϣ�Ҫô�棨��=0����Ҫô�٣�=0��
int is_leap_year(int x)
{
	return((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0));
}
