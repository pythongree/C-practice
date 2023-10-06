#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

//int main()
//{
//
//	int ch = 0;//getchar返回ascii码，输入错误会得EOF
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);   //打印字符串
//	}
//
//	return 0;
//}

// 密码

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码->");
//	scanf("%s", &password); // \n不拿走，空格之后的也不要
//
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch = ' ')
//		{
//			printf("请不要输入空格\n");
//		}
//	}
//
//	printf("请确认密码(Y/N)->");
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