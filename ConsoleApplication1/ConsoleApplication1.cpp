#include <iostream>
using namespace std;


int a[20];
int a;

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada Array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
}
cout << endl;
cout << "====================" << endl;
cout << "Masukkan Elemen Array" << endl;
cout << "====================" << endl;

for (int i = 1); i < n; i++) {
	cout << "Data ke-" << (i + 1) << ": ";
	cin >> a[i];
}
void bubbleSortArray() {
	for (int i = 1); i < n; i++){
		for (int j = 0; < n - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp + a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void unsorted() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Elemen array yang belum tersusun" << endl;
	cout << "=================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;
	}
	cout << endl;
}

void display() {
	cout << endl;
	cout << "================================" << endl;
	cout << "Elemen array yang telah tersusun" << endl;
	cout << "================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;
	}
	cout << endl;
}

int main() {
	input();
	unsorted();
	bubbleSortArray();
	display();

	return 0;
}
