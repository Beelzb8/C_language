#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����
//1.���泣��
// 30;
// 1.8;
// 'a';
// "answer";
//2.const����ĳ�����
 //int main()
 //{
 //const int a = 20;//��c�����У�const���ε�a�������Ǳ��������ǲ���ֱ���޸ģ��г���������
 ////a = 30;//err
 //printf("%d\n", a);
 // ��֤
 // const int n = 10;
 // int arr[n] = {0};//err
 //}
//3.#define����ı�ʶ������
 //#define MAX 1000
 //#define STR "abcde"
 //int main()
 //{
 //printf("%d\n" , MAX);
 // int a = MAX;
 // printf("%d\n", a);
 // printf("%s\n", STR);
 // MAX = 200;//err
 // return 0;
 //}
//4.ö�ٳ���
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//enum Gender
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	RED = 30;//err
//	MALE = 10;//err
// enum Color c = RED;
// enum Color d = MALE;
//	printf("%s", RED);
//	printf("%s", MALE);
//	return 0;
//}
//�ַ���
//c����û���ַ�������
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = {'a','b','c','d','e','f','\0'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	int len = strlen("abc");//��һ���ַ������ȵ�һ��������string length ͷ�ļ�string.h
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
// return 0;
//}
//ת���ַ�
//int main()
//{
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	printf("%s\n", "c:\test\628\test.c");
//	return 0;
//}
//ע��
//д����ʱҪдע�ͣ������Լ����ְ�������
// 
//ѡ�����
//int main()
//{
//	int choice = 0;
//	printf("Ҫ�ú�ѧϰ��(1/0)\n");
//	scanf("%d", &choice);
//	if(choice == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}
//ѭ�����
//int main()
//{
//	printf("�������\n");
//	int line = 0;//0�д���
//	while (line < 20000)
//	{
//		printf("д����:%d��\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}
//����
//��������֮��
//int Add(n1, n2)
//{
//	return (n1 + n2);
//}
//int main()
//{
//	//����
//	int n1 = 0;
//	int n2 = 0;
//	printf("���� n1 , n2 \n");
//	scanf("%d %d", &n1, &n2);
//	//���
//	printf("n1 + n2 = ");
//	int sum = Add(n1, n2);//�Խ�����
//	//��ӡ
//	printf("%d\n", sum);
//	return 0;
//}
//����
//int main()
//{
//	int arr[10] = { 10,11,12,13,14,15,16,17,18,19 };
//	//ѭ����ӡ
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}
//�Ƚ��������Ľϴ�ֵ
//int subtraction(int x, int y)
//{
//	return (x - y);
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	//����
//	printf("������Ҫ���бȽϵ���\n");
//	scanf("%d %d", &n1, &n2);
//	//�Ƚ�
//	int res = subtraction(n1, n2);
//	if (res > 0)
//	{
//		printf("�ϴ�ֵ=%d\n", n1);
//	}
//	else if (res == 0)
//	{
//		printf("һ����\n");
//	}
//	else
//	{
//		printf("�ϴ�ֵ=%d\n", n2);
//	}
//	return 0;
//}
//����������
//��Ŀ�����
//int main()
//{
//	int a = 30;
//	int b = 40;
//	int c = a > b ? a : b;
//	printf("�ϴ�ֵ = %d\n", c);
//	return 0;
//}
//���ű��ʽ�����ö��Ÿ�����һ�α��ʽ
//���ű��ʽ�ļ������������һ�����ʽ�ļ�����