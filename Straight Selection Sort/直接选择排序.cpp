#include<stdio.h>
void Show(int *arr,int len);
 
void SelectSort(int *arr,int len) // ֱ��ѡ������
{
	for(int i = 0;i < len-1;i++)
	{
		for(int j = i+1;j < len;j++)
		{
			if(arr[i] > arr[j])
			{
				arr[i] = arr[i] ^ arr[j];	// λ���㣬����Ҫ�����ռ� 
				arr[j] = arr[i] ^ arr[j]; 
				arr[i] = arr[i] ^ arr[j];

//				int tmp = arr[i]; // �и����ռ� 
//				arr[i] = arr[j];
//				arr[j] = tmp;
			}
		}
 
		printf("��%2d����������",i+1);  // ���ÿ��������
                Show(arr,len);
	}
}

void Show(int *arr,int len)  // �������
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
	printf("        ����ǰ��");
	Show(arr,len);
	SelectSort(arr,len);
	printf("        �����");
	Show(arr,len);
}
