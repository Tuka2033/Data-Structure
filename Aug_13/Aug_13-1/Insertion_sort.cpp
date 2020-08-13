#include<iostream>
using namespace std;
void insertionSort(int* arr, int size)
{
	int key,j;
	for (int i = 1; i < size; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
int main()
{
	int arr[5] = { 3,1,5,4,2 };
	insertionSort(arr, 5);
	cout << "\nSorted Array is::";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ends;
	}
}