#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int n = 0;
	printf("��������Ҫ���ҵ�����");
	scanf("%d", &n);
	int arr[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int left = 0;
	int right = 19;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ�������ڴ�������±���:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("��Ҫ�ҵ������ڴ����鷶Χ��\n");
	}
	return 0;
}
