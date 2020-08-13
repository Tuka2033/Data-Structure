#include<iostream>
using namespace std;
void quicksort(int *arr, int lb, int ub)
{
	int pivot;
	int i,j,temp, flag = 1;
	i = lb;
	j = ub;
	pivot = arr[i];
	while (flag)
	{
		while (arr[i] < pivot && i < ub)
		{
			i++;
		}
		while(arr[j] > pivot && j > ub)
		{
			j--;
		}
		if (i < j)
		{
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
		else
			flag = 0;
	}
	temp = arr[lb];
	arr[lb] = arr[j];
	arr[j] = temp;
	quicksort(arr, lb, j - 1);
	quicksort(arr, j + 1, ub);
}
int main()
{
	int arr[] = { 5,7,1,2,10,4,9,3,6,8 };
	quicksort(arr, 0, 8);
	for (int i = 0; i < 8; i++)
	{
		cout << "\n\n" << arr[i] << ends;
	}
}