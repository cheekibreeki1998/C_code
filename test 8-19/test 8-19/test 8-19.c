#define _CRT_SECURE_NO_WARNINGS 1
void swap(int *a, int *b)

{

	int temp;

	temp = *a;

	*a = *b;

	*b = temp;

}

int main()

{

	int a = 0;

	int b = 0;

	int c = 0;

	printf("��������������\n");

	scanf("%d%d%d", &a, &b, &c);

	if (a < b)

	{

		swap(&a, &b);

	}

	if (a < c)

	{

		swap(&a, &c);

	}

	if (b < c)

	{

		swap(&b, &c);

	}

	printf("�������Ӵ�С����Ϊ��%d %d %d", a, b, c);

	return 0;

}