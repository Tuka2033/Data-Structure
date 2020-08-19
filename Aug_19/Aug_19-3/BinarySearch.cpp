#include<iostream>
using namespace std;
int Binarysearch(int* arr, int size, int key)
{
	int left, right,mid;
	left = 0;
	right = size - 1;
	while(left < right)
	{
		mid = (left + right) / 2;
			if (key == arr[mid])
			{
				return mid;
			}
			else
			{
				if (key < mid)
				{
					right = mid - 1;
				}
				else
				{
					left = mid + 1;
				}
			}
	}
	return -1;	
}

int main()
{
	int arr[10] = { 0,1,3,5,7,8,13,18,20,22};
	int key;
	cout << "\nEnter Searchin key::";
	cin >> key;
	int mid=Binarysearch(arr,10,key);
	if (mid > 0)
	{
		cout << "\nElement Found .......!";
	}
	else
	{
		cout << "\nElement Not Found .......!";
	}
}