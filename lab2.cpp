// SElab1tastingAlgorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

int main() {
	using namespace std;
	int n;
	double xmin, xmax, dx;
	cout << "Please enter only integer numbers for number n and don`t use any characters and symbols during that " << endl;
	cout << "Otherwise your result will be wrong" << endl;
	cout << "Enter n: ";
	cin >> n;

	if (n >= 0) {
		cout << "Enter xMin: ";
		cin >> xmin;
		cout << "Enter xMax: ";
		cin >> xmax;
		cout << "Enter dx: ";
		cin >> dx;
		if (xmin <= xmax && dx != 0) {
			for (dx; xmin <= xmax; xmin += dx) {
				double y = 0;

				if (xmin >= 0) {
					for (int i = 1; i <= (n - 2); i++) {
						y += (i - xmin);
					}
				}
				else {
					for (double i = 0; i < n; i++) {
						float prod = 1;
						for (int j = i; j <= (n - 1); j++) {
							prod *= (pow(i, 2) + j);
						}
						y += prod;
					}
				}
				cout << "x = " << xmin << " " << "y= " << y << endl;
			}
		}
		else {
			cout << "Error" << endl;
		}
	}
	else {
		cout << "Error" << endl;
	}


	system("pause");
	return 0;
}

