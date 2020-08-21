#include<iostream>
using namespace std;
void max_heapify(int *arr,int i,int N)
{
	int largest;
	int left = 2 * i;
	int right = 2 * i + 1;
	if (left <= N && arr[left] > arr[i])
	{
		largest = left;
	}
	else
	{
		largest = i;
	}
	if (left <= N && arr[right] > arr[largest])
	{
		largest = right;
	}
	if (largest != i)
	{
		swap(arr[i], arr[largest]);
		max_heapify(arr, largest, N);
	}
}
void Build_heap(int *arr, int N)
{
	for (int i = N/2; i >= 1; i--)
	{
		max_heapify(arr, i, N);
	}
}
void Display(int arr[], int N)
{
	int i;
	cout << "Heap::";
	for (int i = 1; i <N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void heap_sort(int* arr, int N)
{
	int size = N-2;
	//Build_heap(arr, N+1);
	for (int i = N-1; i >0; i--)
	{
		swap(arr[1], arr[i]);
		size = size-1;
		max_heapify(arr, 1, size);
	}
}
void main()
{
	int arr[] = {0,20,12,35,15,10,80,30,17,2,1 };
	Build_heap(arr, 11);
	Display(arr, 11);
	heap_sort(arr, 11);
	Display(arr, 11);
}