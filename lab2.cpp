// SElab1tastingAlgorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{

	int n;
	float xmin, xmax, dx;
	
	cin >> n >> xmin >> xmax >> dx;
	int fmax = n, smax = n - 1, thmax = n - 2;

	for (dx; xmin <= xmax; xmin += dx) {
		float y = 0;

		if (xmin >= 0) {
			for (int i = 1; i <= thmax; i++) {
				y += (i - xmin);
			}
		}else {
			for (double i = 0; i < fmax; i++) {
				float prod = 1;
				for (int j = i; j <= smax; j++) {
					prod *= (pow(i, 2) + j);
				}
				y += prod;
			}
		}
		cout << "x= " << " " << xmin << " " << "y= " << y << "\n";
	}
	system("pause");
    return 0;
}

