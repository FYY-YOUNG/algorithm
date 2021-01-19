// 直接插入排序
#include<stdio.h>

void Straight_Insert_Sort(int *arr, int length)  
{
	int tmp;
	for (int i = 1; i < length; i++)
	{
		tmp = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > tmp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = tmp;

		printf("第%d趟", i); 
		for (int i = 0; i < length; i++)
		{
			printf("%4d", arr[i]);
		}
		printf("\n");
	}              
}


int main()
{
	int arr[] = { 3,44,38,15,47,43,15 };
	int length = sizeof(arr) / sizeof(arr[0]);

	printf("原数组");
	for (int i = 0; i < length; i++)
	{
		printf("%4d", arr[i]);
	}
	printf("\n");



	Straight_Insert_Sort(arr, length);

	printf("现数组");
	for (int i = 0; i < length; i++)
	{
		printf("%4d", arr[i]);
	}
	printf("\n");

}
