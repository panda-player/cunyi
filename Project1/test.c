#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[4] = { "abc"};//�����С��4ʱ�������Զ��Ÿ�\0�����Ϊ3
//	int c = 0;
//	c=strlen(arr1);
//	printf("%d", c);
//
//	return 0;
//
//}
//int main()
//{
//	char arr1[3] = { "abc" };//�����С��3ʱ���治���Զ��Ÿ�\0���Ų����ˣ����Ϊ���
//	int c = 0;
//	c = strlen(arr1);
//	printf("%d", c);
//
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}
//strlen(str) : ��ȡ�ַ�������Ч�ַ��ĸ���������'\0'������ܹ�9����Ч�ַ�
//sizeof(str)����ȡ������ܴ�С��10��Ԫ�أ�ÿ��Ԫ��ռ1���ֽڣ�����ܹ���10���ֽڣ��ַ������Զ������\0Ҳ����������.
//sizeof��һ������������strlen�ǿ⺯����ֻ���ַ������ȡ�
//sizeof�Ĳ������������ݵ����ͣ�Ҳ�����Ǳ�������strlenֻ���Խ�βΪ'\0'���ַ�����������
//�������ڱ���ʱ�ͼ������sizeof�Ľ������strlen����������ʱ���ܼ��������
//sizeof������������ռ�ڴ�Ĵ�С��strlen�����ַ���ʵ�ʳ��ȡ�





void bubble_sort(int arr[], int sz)//�β�arr������ָ��
{
	//ȷ������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������Ĺ���
		int j = 0;
		int flag = 1;

		for (j = 0; j < sz - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int arr[] = { 6,5,7,2,1,4,5,6,1,7 };

	//����Ϊ���� - ð������
	//��������Ԫ�ظ���
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz);//���鴫�ε�ʱ�򣬴��ݵ���ʵ��������Ԫ�صĵ�ַ
	int a = 0;
	int d = 0;
	for (a = 0; a < 10; a++)
	{
		d = arr[a];
		printf("%d ", d);
	}
	return 0;
}



