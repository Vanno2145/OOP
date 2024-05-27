#include <iostream>

using namespace std;

class Drob {
	int ch;
	int zn;
public:
	Drob() {
		cout << "Construct by default" << endl;
		zn = ch = 1;
	}
	Drob(int a,  int b) {
		cout << "Construct by default" << endl;
		ch = a;
		zn = b;
	}
	void Init() {
		cout << "Input Denominator: ";
		cin >> zn;
		cout << "Input Numerator: ";
		cin >> ch;
	}
	void Show() {
		cout << ch << endl << "_" << endl << zn << endl;
	}
	Drob Plus(Drob & b) {
		Drob rez;

		rez.ch = ch + b.ch;
		rez.zn = zn + b.zn;
		return rez;
	}
	Drob Minus(Drob& b) {
		Drob rez;

		rez.ch = ch - b.ch;
		rez.zn = zn - b.zn;
		return rez;
	}
	Drob Multiple(Drob& b) {
		Drob rez;

		rez.ch = ch * b.ch;
		rez.zn = zn * b.zn;
		return rez;
	}
	Drob Division(Drob& b) {
		Drob rez;

		rez.ch = ch / b.ch;
		rez.zn = zn / b.zn;
		return rez;
	}
	
};


int main() {
	Drob a;

	a.Init();
	Drob b;
	b.Init();
	Drob c;
	

	int choice;
	cout << "Minus - 1; Plus - 2; Multiple - 3; Division - 4" << endl;
	cin >> choice;

	if (choice == 1) {
		c = a.Minus(b);
	}
	else if (choice == 2) {
		c = a.Plus(b);
	}
	else if (choice == 3) {
		c = a.Multiple(b);
	}
	else if (choice == 4) {
		c = a.Division(b);
	}
}