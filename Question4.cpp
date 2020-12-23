#include<iostream>
using namespace std;
void bubleSort(int arr[], int x)
{
	for (int i = 0; i < x - 1; i++)
	{
		for (int j = 0; j < x - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
int main()
{
	int x;
	cout << "Enter the Size of Array: ";
	cin >> x;

	int* z = new int[x];

	cout << "Enter the data to Populate your Array" << endl;
	for (int i = 0; i < x; i++)
	{
		cin >> z[i];
	}

	cout << "***Your array is Populate***" << endl;
	cout << endl;
	cout << endl;
	cout << "Data in your Array is: " << endl;
	for (int i = 0; i < x; i++)
	{
		cout << z[i] << " ";
	}
	cout << endl;
	bubleSort(z, x);
	cout << endl;
	cout << endl;
	cout << "After Bubble Sort:  " << endl;
	for (int i = 0; i < x; i++)
	{
		cout << z[i] << " ";
	}
	return 0;

}