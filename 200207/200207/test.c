#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr1[5] = { 0, 1, 2, 3, 4 };
	int arr2[5] = { 5, 6, 7, 8, 9 };
	int i = 0;
	int tmp = 0;
	for (i = 0; i < 5; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < 5; i++)
	{
		printf("arr1 = %d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("arr2 = %d ", arr2[i]);
	}
}

#include<stdio.h>
#include<stdlib.h>
void init(int arr[])
{
	int i = 0;
	printf("请输入5个数：");
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("数组初始化后为");
	for(i = 0; i < 5; i++)
	{
		printf("%d \n", arr[i]);
	}
}
void reverse(int arr[])
{
	int i = 0;
	printf("逆置后数组为");
	for(i = 4; i >= 0; i--)
	{
		printf("%d \n", arr[i]);
	}
}

int main()
{
	int arr[5];
	int n;
	init(arr);
	reverse(arr);
	return 0;
}

#include <stdio.h>
void Bubble_Sort(int arr[], int len)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[10];
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("请输入十个数字：\n");
	for (i; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}
	Bubble_Sort(arr, len);
	for (i = 0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

