#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//����
/*
1.���泣������3��3.14����w���ַ�����abc���ַ���
2.const���εĳ������������޸�
3.define����ı�ʶ�������������޸�
4.ö�ٳ���
*/

//#define WGQ 200
//#define STR "����ǿ"
//enum Color //û�д�������
//{
//	RED, // �ɸ�ֵ
//	GREEN,
//	BLUE
//};
//int main()
//{
//	const int a = 1; // �����޸�
//	printf("%d\n", WGQ);
//	int b = WGQ;
//	printf("%d\n", b);   // %d��ӡʮ���Ƶ���
//	printf("%s\n", STR); // %s��ӡ�ַ���
//
//	enum Color c = RED; //����ö�ٳ������󣬲����޸�
//	printf("%d\n", c);
//	return 0;
//}

// �ַ���
/*
1 �����������ַ� 'w'
2 ˫���������ַ��� "abcdef"
3 char���ε��ַ�string
*/


//int main()
//{
//	char arr1[] = "abc"; // Ĭ�Ͻ�β��\0����ʾ������
//	char arr2[] = {'a', 'b', 'c', '\0' };// Ĭ�Ͻ�βû��\0����ӡ���������
//										//ֱ����һ��\0
//
//	printf("%s\n", arr1);
//	//printf("%s\n", arr2);��\0����
//	printf("%s\n", arr2);//��\0����
//	printf("%d\n", strlen(arr1)); //������string.h��
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}

//ת���ַ�
/*
1  \?	 ��ֹ����ʺű�����������ĸ�ʣ��������⣬����û�У�
2  \'	 ת�嵥����
3  \"	 ת��˫����
4  \\	 ת��ת�����
5  \a	 ����
6  \b	 �˸��
7  \f	 ��ֽ��
8  \n	 ���з�
9  \r	 �س�
10 \t	 ˮƽ�Ʊ��
11 \v	 ��ֱ�Ʊ��
12 \ddd  ddd��ʾ1~3���˽��Ƶ����֣��磺\130 X
13 \xdd  dd��ʾ����ʮ���������֣��磺\X30 0
*/

/*
%d - ��ӡ����
%c - ��ӡ�ַ�
%s - ��ӡ�ַ���
%f - ��ӡfloat����
%lf - ��ӡdouble����
%zu - ��ӡsizeof�ķ���ֵ
*/

//int main()
//{
//
//	printf("�Ϸʹ�ҵ��ѧ\n����ǿ\n");
//	printf("%c\n", '\130'); //\ddd d�����������ְ˽��� �������ascii��
//	printf("%c\n", '\x30'); //\xdd ʮ������
//	return 0;
//}

