#define _CRT_SECURE_NO_WARNINGS // ��ֹscanf����
//std ��׼�� i input o output
#include<stdio.h>

//int main(void)
//{
//	printf("hello!");
//	return 0;
//}

//int main()
//{
//	/*
//	��������:
//	char      1  byte (�ֽ�) = 8  bit������λ��
//	short     2  byte (�ֽ�) = 16 bit������λ��
//	int       4  byte (�ֽ�) = 32 bit������λ��
//	long      4  byte (�ֽ�) = 32 bit������λ��
//	long long 8  byte (�ֽ�) = 64 bit������λ��
//	float     4  byte (�ֽ�) = 32 bit������λ��
//	double    8  byte (�ֽ�) = 64 bit������λ��
//	*/
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//
//	return 0;
//}

//int main()
//{
//	int age = 23;
//	float price = 88.8;
//	char wo = "����ǿ";
//	printf("�ҽ���%d\n", age);
//	return 0;
//
//}

/*
ȫ�ֱ���-{}��ı���
�ֲ�����-{}�ڵı��� �ֲ�����
*/

//int a = 1;
//
//int main()
//{
//	int a = 2;
//	printf("a = %d", a);
//
//	return 0;
//}

//int main()
//{
//	// �������
//	int a = 0;
//	int b = 0;
//
//	// ����
//	scanf("%d %d", &a, &b); &��ȡַ��
//
//	// ���
//	int sum = a + b;
//
//	// ���
//	printf("�����ܺ�Ϊ��%d\n", sum);
//
//	return 0;
//}

//���������������������
/*
1.�ֲ�����

2.ȫ�ֱ���
*/

//extern int a;// ���������ⲿ�ķ���
//void test()  // ���ú���
//{
//	printf("hello\n");
//}
//int main()
//{
//	test();
//	//int a = 10;//����������{}��
//	{
//		int a = 2;// �ֲ�����
//		printf("a = %d\n", a);
//	}
//	printf("a = %d\n", a);
//
//	return 0;
//}


