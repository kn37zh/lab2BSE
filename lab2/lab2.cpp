#include <iostream>
#include <fstream>
#include <math.h>
#include <string>

int main() {
	using namespace std;
	int n;
	double xmin, xmax, dx;
	string file("file");
	string console("console");
	string inputType;
	cout << "What type of input do you prefer(file/console)?" << endl;
	cin >> inputType;
	if (inputType == file) {

	}
	else if (inputType == console) {
	
		cout << "Enter integer n: ";
		cin >> n;

		if (n >= 3) {
			cout << "Enter xMin, xMax, dx ";
			cin >> xmin >> xmax >> dx;

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
	}
	else {
		cout << "Error. Enter the right comand" << endl;
	}

	system("pause");
	return 0;
}


