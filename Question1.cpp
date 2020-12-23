#include<iostream>
using namespace std;
int main()
{
	
	int* arr;
	int* arr2;
	int size;
	int arr1count = 0;
	int arr2count = 0;
	cout << "Enter the size of both arrays: ";
	cin >> size;
	arr = new int[size];
	arr2 = new int[size];
	cout << "Enter values of 1st array (press -1 to break)" << endl;
	int i = 0;
	while (i < size)
	{
		cin >> arr[i];
		arr1count++;
		if (arr[i] == -1)
		{
			break;
		}
		i++;
	}
	cout << "Enter values of 2nd array (press -1 to break)" << endl;
	int j = 0;
	while (j < size)
	{
		
		cin >> arr2[j];
		arr2count++;
		if (arr2[j] == -1)
		{
			break;
		}
		j++;
	}

	cout << endl;
	cout << "=> Before swapping <=" << endl;
	cout << "your first array is: ";
	for (int i = 0; i < arr1count; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "your second array is: ";
	for (int i = 0; i < arr1count; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl << endl;

	if (arr1count != arr2count)
	{
		cout << "Sory!! size of both arrays are not equal. Hence, swapping not possible" << endl;
		cout << "Lets start again ;)" << endl << endl;
		main();
	}
	else
	{
		cout << "Swapping both arrays kindly wait.";
		swap(arr, arr2);
		cout << endl << endl;
		cout << "=> After swapping <=" << endl;
		cout << "your first array is: ";
		for (int i = 0; i < arr1count; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		cout << "your second array is: ";
		for (int i = 0; i < arr1count; i++)
		{
			cout << arr2[i] << " ";
		}
		cout << endl;

	}


}