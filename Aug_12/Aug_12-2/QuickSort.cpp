#include<iostream>
using namespace std;
void quicksort(int* arr, int lb, int ub)
{
	int pivot;
	int left, right, temp, flag = 1;
	if(lb<ub)
	{
	   left = lb;
	   right = ub;
	  pivot = arr[left];
	  while (flag)
	  {
		while (arr[left] <= pivot && left < ub)
		{
			left++;
		}
		while (arr[right] >= pivot && right > lb)
		{
			right--;
		}
		if (left < right)
		{
			temp = arr[right];
			arr[right] = arr[left];
			arr[left] = temp;
		}
		else
			flag = 0;
	  }
	  temp = arr[lb];
	  arr[lb] = arr[right];
	  arr[right] = temp;
	  quicksort(arr, lb, right - 1);
	  quicksort(arr, right + 1, ub);
    }
}
int main()
{
	int arr[] = { 5,7,1,2,10,4,9,3,6,8 };
	quicksort(arr, 0, 9);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << ends;
	}
}