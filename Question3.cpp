#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter the Size of Array: ";
	cin >> x;
	
	int* ptr = new int [x];

	cout << "Enter the data to Populate your Array" << endl;
	for (int i = 0; i < x; i++)
	{
		cin >> ptr[i];
	}
	
	cout << "***Your array is Populate***" << endl;
	cout << endl;
	cout << endl;
	cout << "Data in your Array is: " << endl;
	for (int i = 0; i < x; i++)
	{
		cout << ptr[i] << " ";
	}

	for (int i = 0; i < x; i++)
	{
		if (ptr[0]<ptr[i])
		{
			int z;
			z = ptr[0];
			ptr[0] = ptr[i];
			ptr[i] = z;
		}
	}
	cout << endl;
	cout << endl;
	cout << endl;
	
	cout <<"	Largest Element is: "<< ptr[0];
	for (int i = 0; i < x; i++)
	{
		if (ptr[0] > ptr[i])
		{
			int z;
			z = ptr[0];
			ptr[0] = ptr[i];
			ptr[i] = z;
		}
	}
	cout << endl;
	cout << "	Smallest Element is: " << ptr[0];
	return 0;
}