#pragma once

#include<iostream>
#include<string>
using namespace std;

class Car
{
	private:
		//Attributes
		string company;
		string regNo;
		int model;
		bool transmissionType;

	public:
		//Constructors

		Car()	//Default Constructor
		{
			this->company = "";
			this->regNo = "";
			this->model = 0;
			this->transmissionType = false;
		}

		Car(string company, string regNo, int model, bool transmissionType)	//Parameterized Constructor
		{
			this->company = company;
			this->regNo = regNo;
			this->model = model;
			this->transmissionType = transmissionType;
		}

		Car(Car& car)	//Copy Constructor
		{
			this->company = car.company;
			this->regNo = car.regNo;
			this->model = car.model;
			this->transmissionType = car.transmissionType;
		}

		//Destructor

		~Car()
		{
			cout << "Thank You For Coming!" << endl;
		}

		//Getters
		
		string getCompany()
		{
			return this->company;
		}

		string getRegNo()
		{
			return this->regNo;
		}

		int getModel()
		{
			return this->model;
		}

		bool getTransmissionType()
		{
			return this->transmissionType;
		}

		//Setters
		
		void setCompany(string company)
		{
			this->company = company;
		}

		void setRegNo(string regNo)
		{
			this->regNo = regNo;
		}

		void setModel(int model)
		{
			this->model = model;
		}

		void setTransmissionType(bool transmission)
		{
			this->transmissionType = transmission;
		}

		//Methods


};


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