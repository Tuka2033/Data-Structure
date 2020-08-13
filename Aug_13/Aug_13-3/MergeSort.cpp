#include<iostream>
using namespace std;

void mergeSort(int* arr,int *temp,int left, int mid,int right)
{
	int  left_end, numberOfelement, temp_pos;
	left_end = mid - 1;
	temp_pos = left;
	numberOfelement = right - left + 1;
	
	//traverse both array in each iteration & add smaller of both elements in temp
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

	//add left element in first interval
	while (left <= left_end)
	{
		temp[temp_pos] = arr[left];
		temp_pos++;
		left++;
	}

	//add left element in second interval
	while (mid <= right)
	{
		temp[temp_pos] = arr[mid];
		temp_pos++;
		mid++;
	}
	
	//copy element temp array to original array
	for (int i = 0; i <= numberOfelement; i++)
	{
		arr[right] = temp[right];
		right--;
	}
}
void m_sort(int* arr, int *temp, int left, int right)
{
	int mid;
	if (right > left)
	{
		mid = (right + left) / 2;
		m_sort(arr,temp,left, mid);
		m_sort(arr,temp,mid+1,right);
		mergeSort(arr,temp,left, mid, right);
	}
}
int main()
{
	int temp[5];
	int arr[5] = { 3,1,4,2,5 };

	//call m_sort method
	m_sort(arr,temp, 0, 4);

	//print sorted array
	cout << "\nSorted Array is::";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ends;
	}
}