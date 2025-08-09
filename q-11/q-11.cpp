// q-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// program to multiply two 2x2 matrices
//
#include <iostream>
using namespace std;
int main()
{
	//define a 2x2 matrix and take input from user
	int m1[2][2];
	int m2[2][2];
	int result[2][2];
	for(int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Enter element [" << i << "][" << j << "] of first matrix: ";
			cin >> m1[i][j];
		}
	}
	for(int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Enter element [" << i << "][" << j << "] of second matrix: ";
			cin >> m2[i][j];
		}
	}
	for(int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			result[i][j] = m1[i][0] * m2[0][j] + m1[i][1] * m2[1][j];
		}
	}
	for(int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout  <<result[i][j] << " ";
		}
		cout << endl;
	}


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
