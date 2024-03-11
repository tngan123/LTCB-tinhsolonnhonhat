#include <iostream>
using namespace std;
int main()
{
	int so1, so2, so3, lonnhat, nhonhat;
	cout << "Nhap so:"; cin >> so1;
	cout << "Nhap so:"; cin >> so2;
	cout << "Nhap so:"; cin >> so3;
	lonnhat = nhonhat = so1;
	if (lonnhat > so2) {
		lonnhat = so2;
	}
	if (lonnhat < so2) {
		lonnhat = so2;
	}
	if (lonnhat > so3) {
		lonnhat = so3;
	}
	if (lonnhat < so3) {
		lonnhat = so3;
	}
	cout << "So lon nhat la: " << lonnhat << endl;
	cout << "So nho nhat la: " << nhonhat << endl;
	return 0;
}


