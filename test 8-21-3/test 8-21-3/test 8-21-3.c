#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//ʲô����������һ������1����Ȼ��������1�����������⣬���ܱ�������Ȼ��������������������
	int n = 0;
	for (n = 100; n <= 200; n++)
	{
		int i = 0;
		for (i = 2; i < n; i++)
		{
		 if (n % i == 0)
				break;
		}
		 if (i == n)
		{
			printf("%d ", n);
		}
	}
	return 0;
}