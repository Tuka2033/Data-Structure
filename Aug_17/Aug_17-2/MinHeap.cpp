#include<iostream>
using namespace std;
void minHeap(int* arr, int i, int N)
{
	int smallest;
	int left = 2 * i;
	int right = 2 * i + 1;
	if (left <= N && arr[left] < arr[i])
	{
		smallest = left;
	}
	else
	{
		smallest = i;
	}
	if (right <= N && arr[right] < arr[smallest])
	{
		smallest = right;
	}
	if (smallest != i)
	{
		swap(arr[i], arr[smallest]);
			minHeap(arr, smallest, N);
	}
}
void buildHeap(int* arr, int N)
{
	for(int i = N / 2; i >=1; i--)
	{
		minHeap(arr, i, N);
	}
}
void Display(int arr[], int N)
{
	//int i;
	cout << "Min Heap::";
	for (int i = 1; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void heap_sort(int* arr, int N)
{
	int size = N;
	for (int i =N; i >0; i--)
	{
		swap(arr[1], arr[i]);
		size = size-1;
		minHeap(arr, 1, size);
	}
}
void main()
{
	int arr[] = {0,20,12,35,15,10,80,30,17,2,1 };
	buildHeap(arr, 10);
	Display(arr, 11);
    heap_sort(arr, 10);
	Display(arr, 11);
}