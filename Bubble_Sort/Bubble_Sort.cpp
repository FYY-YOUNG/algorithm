//==================================================================
// Bubble Sort
// 作者：CSDN：比特的一天
//==================================================================

#include <stdio.h>

bool IsVaild = false;  // 标志是否为正常输入

void Bubble_Sort(int *arr, int length)
{
	IsVaild = false;

	if (arr == NULL || length <= 0)
	{
		return;
	}

	bool IsSwap = false;

	for (int i = 0; i < length; i++)
	{
		IsSwap = false; //增加flag标志位，根据有无数据交换，去决定是继续冒泡还是结束冒泡
		for (int j = 0; j < length - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])  // 两两比较
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				IsSwap = true;
			}
		}

		//if (IsSwap == false)
		//{
		//	break;
		//}

		printf("第%d步排序结果：", i + 1);   // 输出每步排序结果
		for (int k = 0; k < length; k++)
		{
			printf("%5d", arr[k]);
		}
		printf("\n");

	}

	IsVaild = true;
}

// ====================Test Code====================

void Sort(int *arr, int length)
{
	Bubble_Sort(arr, length);
	if (IsVaild)
	{
		for (int i = 0; i < length; i++)
		{
			printf("%d  ", arr[i]);
		}
		printf("\n");
	}
	else
	{
		printf("Input is InVaild\n");
	}
}


void Test1()
{
	int arr[] = { 3,44,38,15,47,43 };
	int length = sizeof(arr) / sizeof(arr[0]);
	Sort(arr, length);
}


int main()
{
	Test1();
}
