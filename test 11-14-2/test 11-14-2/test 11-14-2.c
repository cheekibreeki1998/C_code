#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

char *my_strstr(const char *str, char *string)
{
	int i = 0;
		assert(str&&string);
	while ('\0' != str)
	{
		while (1)
		{
			if (string[i] != str[i])    //�ӵ�һ���ַ���ʼƥ���ַ��Ƿ���ͬ
				break;
			if (string[i] == '\0')       //�ж�string���ַ��Ƿ�������
				return str;
			i++;
		}
		string++;
	}
	return NULL;
}

int main()
{
	char string[] = "abcdefg";
	char str[] = "abcd";
	char *p = my_strstr(string, str);
	int result = p - str + 1;
	if (p != NULL)
		printf("%s found at position %d\n\n", string, result);
	else
		printf("%s not found\n", string);
	return 0;
}