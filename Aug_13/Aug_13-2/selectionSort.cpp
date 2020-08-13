#include<iostream>
using namespace std;


void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x=*y;
	*y = temp;

}
void selectionSort(int* arr, int size)
{
	int minLoc;
	for (int i = 0; i < size; i++)
	{
		minLoc = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] > arr[minLoc])
			{
				minLoc = j;
			}
			swap(&arr[j], &arr[minLoc]);
		}
	}
}
int main()
{
	int arr[5] = { 4,1,3,2,5 };
	selectionSort(arr, 5);
	cout << "\nSorted Array is::";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ends;
	}
}