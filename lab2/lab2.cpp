#include <iostream>
#include <fstream>
#include <math.h>

int main() {
	using namespace std;
	int n;
	double xmin, xmax, dx;
	cout << "Enter integer n: ";
	//cin >> n;
	ifstream inputFile;
	inputFile.open("InputData.txt");
	inputFile >> n;
	if (n >= 3) {
		//cout << "Enter xMin, xMax, dx ";
		//cin >> xmin >> xmax >> dx;
		inputFile >> xmin;
		inputFile >> xmax;
		inputFile >> dx;
		inputFile.close();
		if (xmin < xmax && dx > 0) {
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


