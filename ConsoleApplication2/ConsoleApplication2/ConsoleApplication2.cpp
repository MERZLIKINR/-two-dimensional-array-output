#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	system("color 04");

	const int ROW = 10;
	const int COLLUM = 10;

	int arr[ROW][COLLUM]{};

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COLLUM; j++)
		{
			arr[i][j] = rand() % 100;
		}       
	}

	for (int i = 0; i < ROW; i++)
	{ 
		for (int j = 0; j < COLLUM; j++)
		{
			cout << arr[i][j] << "\t";
		}

		cout << endl;
	}

	system("pause"); 
}
