#pragma once

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
	//Constructor Declarations

	Car();	//Default Constructor

	Car(string company, string regNo, int model, bool transmissionType);	//Parameterized Constructor

	Car(Car& car);	//Copy Constructor


	//Destructor

	~Car();

	//Getters

	string getCompany();
	string getRegNo();
	int getModel();
	bool getTransmissionType();

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
