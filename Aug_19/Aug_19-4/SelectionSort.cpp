#include<iostream>
using namespace std;
void SelectionSort(int* arr, int size)
{
	int minLoc;
	for (int i = 0; i < size; i++)
	{
		minLoc=i;
		for (int j = i+1; j < size; j++)
		{
			if (arr[minLoc] > arr[j])
			{
				minLoc = j;
			}
		}
		swap(arr[i], arr[minLoc]);
	}
}
int main()
{
	int arr[10] = { 1,4,2,5,3,7,6,8,0,9 };
	SelectionSort(arr, 10);
	cout << "\nSorted Array is::";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i]<<" ";
	}
	return 0;
}