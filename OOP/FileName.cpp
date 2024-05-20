#include <iostream>

using namespace std;

int Plus(double a, double b) {
	return a + b;
}

int Minus(double a, double b) {
	return a - b;
}

int Division(double a, double b) {
	return a / b;
}

int Multiple(double a, double b) {
	return a * b;
}

int main() {
	double a, b;
	int choice;
	cout << "1 - Minus; 2 - Plus; 3 - Multiple; 4 - Division";
	cin >> choice;
	cout << "First num: ";
	cin >> a;
	cout << "Second num: ";
	cin >> b;

	if (choice == 1) {
		cout << Minus(a, b);
	}
	else if (choice == 2) {
		cout << Plus(a, b);
	}else if(choice == 3) {
		cout << Multiple(a, b);
	}
	else if (choice == 4) {
		if (b != 0) {
			cout << Division(a, b);
		}
		else {
			cout << "ERROR";
		}
	}
}