#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[4] = { "abc"};//数组大小放4时后面能自动放个\0，输出为3
//	int c = 0;
//	c=strlen(arr1);
//	printf("%d", c);
//
//	return 0;
//
//}
//int main()
//{
//	char arr1[3] = { "abc" };//数组大小放3时后面不能自动放个\0，放不下了，输出为随机
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
//strlen(str) : 获取字符串中有效字符的个数，不算'\0'，因此总共9个有效字符
//sizeof(str)：获取数组的总大小，10个元素，每个元素占1个字节，因此总共是10个字节，字符串后自动放入的\0也被计算再内.
//sizeof是一个操作符，而strlen是库函数，只求字符串长度。
//sizeof的参数可以是数据的类型，也可以是变量，而strlen只能以结尾为'\0'的字符串作参数。
//编译器在编译时就计算出了sizeof的结果，而strlen必须在运行时才能计算出来。
//sizeof计算数据类型占内存的大小，strlen计算字符串实际长度。





void bubble_sort(int arr[], int sz)//形参arr本质是指针
{
	//确定趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		int flag = 1;

		for (j = 0; j < sz - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
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

	//排序为升序 - 冒泡排序
	//计算数组元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz);//数组传参的时候，传递的其实是数组首元素的地址
	int a = 0;
	int d = 0;
	for (a = 0; a < 10; a++)
	{
		d = arr[a];
		printf("%d ", d);
	}
	return 0;
}



