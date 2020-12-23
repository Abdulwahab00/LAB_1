#include<iostream>
using namespace std;

int main()
{
	int s1, s2, s3 ;
	cout << endl;
	cout << "Enter size for first array: ";
	cin >> s1;
	cout << endl;
	cout << "Enter size for 2nd array: ";
	cin >> s2;
	cout << endl;
	cout << "Enter size for 3rd array: ";
	cin >> s3;
	cout << endl;
	int*** array1 = new int** [s1];
	int*** array2 = new int** [s1];
	int*** array3 = new int** [s1];

	for (int a = 0; a < s1; a++)
	{
		array1[a] = new int* [s2];
		array2[a] = new int* [s2];
		array3[a] = new int* [s2];
		for (int b = 0; b < s2; b++)
		{
			array1[a][b] = new int[s3];
			array2[a][b] = new int[s3];
			array3[a][b] = new int[s3];
		}
	}
	cout << endl;
	cout << "Enter 1st Array: ";
	cout << endl;
	for (int a = 0; a < s1; a++)
	{
		for (int b = 0; b < s1; b++)
		{
			for (int c = 0; c < s1; c++)
			{
				cin >> array1[a][b][c];
			}
		}
	}
	cout << endl;
	cout << "Enter 2nd Array: ";
	cout << endl;
	for (int a = 0; a < s1; a++)
	{
		for (int b = 0; b < s2; b++)
		{
			for (int c = 0; c < s3; c++)
			{
				cin >> array2[a][b][c];
			}
		}
	}
	cout << endl;
	cout << endl;
	for (int a = 0; a < s1; a++)
	{
		for (int b = 0; b < s2; b++)
		{
			for (int c = 0; c < s3; c++)
			{
				array3[a][b][c] = array1[a][b][c] + array2[a][b][c];
			}
		}
	}
	cout << endl;
	cout << "Addition: ";
	cout << endl;
	for (int a = 0; a < s1; a++)
	{
		for (int b = 0; b < s2; b++)
		{
			for (int c = 0; c < s3; c++)
			{
				cout << array3[a][b][c] << "  ";
			}
		}
		cout << endl;
	}
	if (s1 != s2 && s2 != s3)
	{
		cout << "size does not match" << endl;
	}
	else
	{
		for (int a = 0; a < s1; a++)
		{
			for (int b = 0; b < s2; b++)
			{
				for (int c = 0; c < s3; c++)
				{
					array3[a][b][c] = 0;
				}
			}
		}
		for (int a = 0; a < s1; a++)
		{
			for (int b = 0; b < s2; b++)
			{
				for (int c = 0; c < s3; c++)
				{
					(*array3[a][b]) += (*array1[a][c]) * (*array2[c][b]);
				}
			}
		}
		cout << endl;
		cout << "Multiplication:";
		cout << endl;
		for (int a = 0; a < s1; a++)
		{
			for (int b = 0; b < s2; b++)
			{
				for (int c = 0; c < s3; c++)
				{
					cout << array3[a][b][c] << "  ";
				}
			}
			cout << endl;
		}
	}
	cout << endl;
	cout << endl;
	system("pause");
	return 0;
}