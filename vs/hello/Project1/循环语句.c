#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

//int main()
//{
//
//	int ch = 0;//getchar����ascii�룬���������EOF
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);   //��ӡ�ַ���
//	}
//
//	return 0;
//}

// ����

//int main()
//{
//	char password[20] = { 0 };
//	printf("����������->");
//	scanf("%s", &password); // \n�����ߣ��ո�֮���Ҳ��Ҫ
//
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch = ' ')
//		{
//			printf("�벻Ҫ����ո�\n");
//		}
//	}
//
//	printf("��ȷ������(Y/N)->");
//	printf("%s\n", password);
//	int ret = getchar();
//
//	if ('Y' == ret)
//	{
//		printf("YES\n");
//
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if ((ch < '0' || ch > '9'))
			continue;
		else
			putchar(ch);
	}


	return 0;
}