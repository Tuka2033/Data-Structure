#include<iostream>
using namespace std;
void LinearSearch(int* arr, int size,int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			cout << "\nElement Found...!!!!!!!!!!!";
			return;
		}
	}
	cout << "\nElement Not Found...!!!!!!!!!!!";
}
int main()
{
	int key;
	int arr[10] = { 2,5,3,4,9,1,8 ,9,6,0};
	cout << "\nEnter Serching Key::";
	cin >> key;
	LinearSearch(arr,10, key);
	return 0;
}