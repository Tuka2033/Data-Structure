#include<iostream>
using namespace std;
void BubbleSort(int *arr,int size)
{
	int i, j;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if ((arr[j] > arr[j + 1]))
			{

				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
}
int main()
{
	
	int size = 5;
	int arr[5] = { 9,1,3,2,6 };
	BubbleSort(arr, size);	
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ends;
	}
}