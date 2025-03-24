
#include<iostream>
#include<string>
#include"Car.h"
using namespace std;


//-----------------------------------------------Constructor Definitions-----------------------------------------------

Car::Car()
{
	this->company = "";
	this->regNo = "";
	this->model = 0;
	this->transmissionType = false;
}

Car::Car(string company, string regNo, int model, bool transmissionType)	//Parameterized Constructor
{
	this->company = company;
	this->regNo = regNo;
	this->model = model;
	this->transmissionType = transmissionType;
}

Car::Car(Car& car)	//Copy Constructor
{
	this->company = car.company;
	this->regNo = car.regNo;
	this->model = car.model;
	this->transmissionType = car.transmissionType;
}

//-----------------------------------------------Destructor Definitions-----------------------------------------------

Car::~Car()
{
	cout << "Thank You For Coming!" << endl;
}



//-----------------------------------------------Getter Definitions-----------------------------------------------

string Car::getCompany()
{
	return this->company;
}

string Car::getRegNo()
{
	return this->regNo;
}

int Car::getModel()
{
	return this->model;
}

bool Car::getTransmissionType()
{
	return this->transmissionType;
}

//-----------------------------------------------Setter Definitions-----------------------------------------------

void Car::setCompany(string company)
{
	this->company = company;
}

void Car::setRegNo(string regNo)
{
	this->regNo = regNo;
}

void Car::setModel(int model)
{
	this->model = model;
}

void Car::setTransmissionType(bool transmission)
{
	this->transmissionType = transmission;
}