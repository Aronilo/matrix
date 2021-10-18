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
			mass[i][j] = -10 + rand() % 21;		
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
			cout << mass[i][j] << " ";
		cout << endl;
	}
	for (int i = 0; i < size; ++i)
	{
		mass[i = size - 1-i][j]=mass[;
		mass[]

		delete[] mass;
}