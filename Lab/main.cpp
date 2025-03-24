#include<iostream>
#include<string>
#include"Car.h"
using namespace std;

int main()
{
	string st;
	Car car1;
	cin >> ws;
	getline(cin, st);

	car1.setCompany(st);
	cout << car1.getCompany() << endl;
	return 0;
}