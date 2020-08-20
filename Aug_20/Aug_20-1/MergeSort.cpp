#include<iostream>
using namespace std;

void mergeSort(int* arr,int *temp,int left,int mid, int right)
{
	int left_end, noOfelement, temp_pos;
	left_end = mid - 1;
	temp_pos = left;
	noOfelement = right-left + 1;
	while ((left <= left_end) && (mid <= right))
	{
		if (arr[left] <= arr[mid])
		{
			temp[temp_pos] = arr[left];
			temp_pos++;
			left++;
		}
		else
		{
			temp[temp_pos] = arr[mid];
			temp_pos++;
			mid++;
    	}
	}
	while (left <= left_end)
	{
		temp[temp_pos] = arr[left];
		temp_pos++;
		left++;
		
	}
	while (mid <= right)
	{
		temp[temp_pos] = arr[mid];
		temp_pos++;
		mid++;
		
	}

	for (int i = 0; i < noOfelement; i++)
	{
		arr[right] = temp[right];
		right--;
	}
}

void mSort(int* arr, int*temp, int left, int right)
{
	int mid;
	if (right > left)
	{
		mid = (right+left) / 2;
		mSort(arr,temp, left, mid);
		mSort(arr,temp, mid + 1, right);
		mergeSort(arr,temp, left, mid+1,right);
	}
}

int main()
{
	int temp[5];
	int arr[5] = { 3,1,4,2,5 };

	//call m_sort method
	mSort(arr,temp,0, 4);

	//print sorted array
	cout << "\nSorted Array is::";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ends;
	}
}