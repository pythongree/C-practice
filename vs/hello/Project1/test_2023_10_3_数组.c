#define _CRT_SECURE_NO_WARNINGS
//
#include <stdio.h>
//
//// �ӷ�����
////
////int ADD(int x, int y)
////{
////	int sum = x + y;
////	return sum;
////}
//
//
////int main()
////{
////	int a = 0;
////	int b = 0;
////	printf("����Ҫ��ӵ���\n");
////	scanf("%d %d", &a, &b);
////
////	int sum = ADD(a, b);
////	printf("��Ϊ��%d\n", sum);
////
////
////	return 0;
////}
//
////// ����
////int main()
////{
////
////	int arr[10] = {1, 23, 23, 54, 54};
////	char ch[3] = { 'q', 'e', 'w' };
////	printf("%d\n", arr[9]);
////	printf("%s\n", ch[2]);
////	return 0;
////}
//
//
//// ���������
////int main()
////{
////	int a = 7 / 2;  //�������������������Ϊ����
////	float b = 7 / 2.0;//����������С�������ΪС��
////	printf("%d\n", a);
////	printf("%f\n", b);
////	printf("%.1f\n", b);//.�������С����λ��
////
////	//ȡģ(��)����
////	int c = 7 % 2;//��������ֻ��������
////	printf("%d\n", c);
////
////	return 0;
////}
//
//int main()
//{
//
//	//int a = 1;
//	//a += 2;
//	//printf("%d\n", a);
//	//a -= 1;
//	//printf("%d\n", a);
//	//a *= 2;
//	//printf("%d\n", a);
//	//a /= 2;
//	//printf("%d\n", a);
//	//a++;
//	//printf("%d\n", a);
//	//a--;
//	//printf("%d\n", a);
//
//	//int flag = 0;//0Ϊ�٣�����Ϊ��
//	//if (!flag)
//	//{
//	//	printf("%d\n", flag);
//	//}
//
//	//int arr[10] = { 0 };
//	//printf("%zu\n", sizeof(arr));
//	//printf("%zu\n", sizeof(arr[0]));
//	//printf("%zu\n", sizeof(arr)/ sizeof(arr[0]));//��֪Ԫ�ظ���
//
//
//	//// ����++
//	//int a = 10;
//	//int b = a++;//int b = a; a = a + 1;
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	// ǰ��++  --ͬ��
//	//int a = 10;
//	//int b = ++a;// a = a + 1;int b = a;
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	////ǿ������ת��
//	//int a = (int)3.14;
//	//printf("%d\n", a);
//
//
//	//�߼�������
//	//&& ��
//	// || ��
//
//	//����������
//	//��Ŀ������
//	// a ��b ��c�� a�棬bִ�У�a�٣�cִ��
//	//int a = 10;
//	//int b = 20;
//	//int c = a > b ? a : b;
//	//printf("%d\n", c);
//
//
//	//���ű��ʽ
//	//���μ��㣬���Ϊ���һ�����ʽ
//
//	//int a = 10;
//	//int b = 20;
//	//int c = 0;
//
//	//int d = (c = a + b, a = b + c, c + 2);
//	//printf("%d\n", d);
//
//
//	// �±����ò�����[]
//	// �������ò���������
//	// 
//
//	
//
//
//	return 0;
//}

// �ؼ���typedef
//typedef unsigned int uint;
//
//int main()
//{
//	unsigned int a = 1;
//	uint b = 1;
//	// a �� b ������һ��
//
//	return 0;
// }

// �ؼ��� static
//1 ���ξֲ�����
//2 ����ȫ�ֱ���
//3 ���κ���

//void add()
//{
//	//int a = 1; �ֲ�����
//	static int a = 1;//a���뾲̬����
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		add();
//		i++;
//
//	}
//	return 0;
//}

//extern int a;
//extern int ADD(int x, int y);
//int main()
//{
//	int b = 10;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}


//define
//#define MAX 2023//�����ʶ����
//#define ADD(x, y, z) ((x) + (y) + (z))//�����
////		����  ����         ����			�������滻����
//int main()
//{
//	int a = 10;
//	int b = 23;
//	int c = MAX;
//	int d = ADD(a, b, c);//int d = ((a) + (b) + (c));
//	printf("%d\n", d);
//	&a;
//	printf("%p", &a);//��ӡ��ַ%p,ʮ������
//
//	return 0;
//}


// ָ�����

//int main()
//{
//	int a = 10;
//	int * p = &a; //ָ�����������a�ĵ�ַ
////  int ˵��pָ���a��int����
////   *  ˵��p��ָ������� �����ò�����// *p ������ָ����
//	*p = 20;
//	printf("%d\n", a);
//	//32λ���ԣ�32����λ��4byte
//	//64λ��8byte
//	printf("%zu\n", sizeof(int*));
//
//
//
//	return 0;
//}

//�ṹ��
//
//struct Stu
//{
//	//��Ա
//	char name[20];
//	int age;
//	char school[10];
//	char tele[12];
//	int QQ;
//
//};
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s %d\n", (*ps).name, (*ps).age, (*ps).school, (*ps).tele, (*ps).QQ);
//	//. ������
//	printf("%s %d %s %s %d\n", ps->name, ps->age,ps->school, ps->tele,ps->QQ);
//	//->��ͷ���������ṹ���ַ->��Ա
//}
//int main()
//{
//	struct Stu wgq = { "����ǿ", 23, "HFUT", "15105633059", 1275433161 };
//	printf("%s %d %s %s %d\n", wgq.name, wgq.age, wgq.school, wgq.tele, wgq.QQ);
//	print(&wgq);
//
//	return 0;
//}