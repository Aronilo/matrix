#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	int size;
	cin >> size;
	int** mass = new int*[size];
	for (int i = 0; i < size; i++)
	{
		mass[i] = new int[size];
	}
	srand(time(0));
	for (int i = 0; i < size; ++i)
		for (int j = 0; j < size; ++j)
			mass[i][j] = rand() % 21 - 10;		
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
			cout << setw(3) << mass[i][j] << " ";
		cout << endl;
	}
	
	int total = 0;

	for (int i = 0; i < size; ++i)
	{
		total += mass[size-1][i]*mass[i][0];
	}
	for (int i = 0; i < size; i++)
	{
		mass[size - 1 - i][i] = total;
	}

	cout << endl;

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
			cout << setw(3) << mass[i][j] << " ";
		cout << endl;
	}
	for (int i = 0; i < size; i++)
		{
		delete[] mass[i];
		}

		delete[] mass;
}