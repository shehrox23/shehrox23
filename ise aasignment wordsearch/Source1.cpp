#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	int rows = 0;
	char search[25];
	char matrix[20][20];
	ifstream fin("output.txt");
	for (int i = 0; i < 25; i++)
	{
		fin.getline(search, 25);
		cout << i << ") THE WORD IS : " << search << endl;
		if (strlen(search) > 1)//bcz there is no word of length 1
		{
			rows++;
		}
		else
		{
			break;
		}
	}
	fin.close();
	//cout << "\nTHE ROWS are: " << rows;
	//cout << "\nThe COLS are : " << rows;
	cout << endl;
	fin.open("output.txt");
	for (int i = 0; i < rows; i++)
	{
		fin.getline(search, 25);
		for (int j = 0; j < rows; j++)
		{
			matrix[i][j] = search[j];
		}
	}
	fin.close();

	cout << " ";
	for (int i = 0; i < rows; i++)
	{
		cout << " ---";
	}
	for (int i = 0; i < rows; i++)
	{
		cout << endl;
		for (int j = 0; j < rows; j++)
		{
			cout << " | " << matrix[i][j];
		}
		cout << " |\n ";
		for (int i = 0; i < rows; i++)
		{
			cout << " ---";
		}
	}
	cout << endl;
	int no = 0;
	fin.open("input.txt");
	for (int k = 0; k < rows; k++)
	{
		fin.getline(search, 25);
		for (int i = 0; i < rows - 1; i++)
		{
			for (int j = 0; j < rows - 1; j++)
			{
				if (matrix[i][j] == search[no] && matrix[i][j + 1] == search[no + 1] && matrix[i][j + 2] == search[no + 2] && matrix[i][j + 3] == search[no + 3] && j < rows && i < rows)
				{
					cout << "The Word " << search << " starts from [" << i << "] [" << j << "] To [" << i << "][" << (j + strlen(search) - 1) << "]\n";
				}
				else if (matrix[i][j] == search[no] && matrix[i + 1][j] == search[no + 1] && matrix[i + 2][j] == search[no + 2] && matrix[i + 3][j] == search[no + 3] && j < rows && i < rows)
				{
					cout << "The Word " << search << " starts from [" << i << "] [" << j << "] To [" << (i + strlen(search) - 1) << "][" << (j) << "]\n";
				}
				else if (matrix[i][j] == search[no] && matrix[i][j - 1] == search[no + 1] && matrix[i][j - 2] == search[no + 2] && matrix[i][j - 3] == search[no + 3] && j < rows && i < rows)
				{
					cout << "The Word " << search << " starts from [" << i << "] [" << j << "] To [" << (i) << "][" << (j - strlen(search) + 1) << "]\n";
				}
				else if (matrix[i][j] == search[no] && matrix[i - 1][j] == search[no + 1] && matrix[i - 2][j] == search[no + 2] && matrix[i - 3][j] == search[no + 3] && j < rows && i < rows)
				{
					cout << "The Word " << search << " starts from [" << i << "] [" << j << "] To [" << (i - strlen(search) + 1) << "][" << j << "]\n";
				}
				else if (matrix[i][j] == search[no] && matrix[i + 1][j + 1] == search[no + 1] && matrix[i + 2][j + 2] == search[no + 2] && matrix[i + 3][j + 3] == search[no + 3] && j < rows && i < rows)
				{
					cout << "The Word " << search << " in is DIAGONAL starts from [" << i << "] [" << j << "] To [" << (i + strlen(search) - 1) << "][" << (j + strlen(search) - 1) << "]\n";
				}
				else if (matrix[i][j] == search[no] && matrix[i - 1][j - 1] == search[no + 1] && matrix[i - 2][j - 2] == search[no + 2] && matrix[i - 3][j - 3] == search[no + 3] && j < rows && i < rows)
				{
					cout << "The Word " << search << " is in DIAGONAL starts from [" << i << "] [" << j << "] To [" << (i - strlen(search) + 1) << "][" << (j - strlen(search) + 1) << "]\n";
				}
				else if (matrix[i][j] == search[no] && matrix[i + 1][j - 1] == search[no + 1] && matrix[i + 2][j - 2] == search[no + 2] && matrix[i + 3][j - 3] == search[no + 3] && j < rows && i < rows)
				{
					cout << "The Word " << search << " in is DIAGONAL starts from [" << i << "] [" << j << "] To [" << (i + strlen(search) - 1) << "][" << (j - strlen(search) + 1) << "]\n";
				}
				else if (matrix[i][j] == search[no] && matrix[i - 1][j + 1] == search[no + 1] && matrix[i - 2][j + 2] == search[no + 2] && matrix[i + 3][j + 3] == search[no + 3] && j < rows && i < rows)
				{
					cout << "The Word " << search << " is in DIAGONAL starts from [" << i << "] [" << j << "] To [" << (i - strlen(search) + 1) << "][" << (j + strlen(search) - 1) << "]\n";
				}
			}
		}
	}
	cout << endl;
	system("pause");
	return 0;
}