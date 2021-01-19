#include<stdio.h>
void Show(int *arr,int len);
 
void SelectSort(int *arr,int len) // 直接选择排序
{
	for(int i = 0;i < len-1;i++)
	{
		for(int j = i+1;j < len;j++)
		{
			if(arr[i] > arr[j])
			{
				arr[i] = arr[i] ^ arr[j];	// 位运算，不需要辅助空间 
				arr[j] = arr[i] ^ arr[j]; 
				arr[i] = arr[i] ^ arr[j];

//				int tmp = arr[i]; // 有辅助空间 
//				arr[i] = arr[j];
//				arr[j] = tmp;
			}
		}
 
		printf("第%2d步排序结果：",i+1);  // 输出每步排序结果
                Show(arr,len);
	}
}

void Show(int *arr,int len)  // 输出函数
{
	for(int i = 0;i < len;i++)
	{
		printf("%5d",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = {3,24,5,15,26,27,2,4,19,15,48};
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("        排序前：");
	Show(arr,len);
	SelectSort(arr,len);
	printf("        排序后：");
	Show(arr,len);
}
