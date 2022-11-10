#include <iostream>
#include "Header.h"
using namespace std;

employee::employee()
{
	cout << "INDEED, ALLAH IS THE GREATEST " << endl;
	firstname = nullptr;
	lastname = nullptr;
	hourlyrate = 0.00;
	hours = 0;
	salary = 0;
}

employee::~employee()
{
	if (firstname == nullptr && lastname == nullptr)
	{
		delete[]firstname;
		firstname = nullptr;
		delete[]lastname;
		lastname = nullptr;
	}
	else{
		delete[]firstname;
		firstname = nullptr;
		delete[]lastname;
		lastname = nullptr;
	}
}

void employee::setfirstname(char * na)
{
	int length = 0;
	for (int i = 0; na[i] != '\0'; i++)
	{
		length++;
	}
	firstname = new char[length + 1];
	for (int i = 0; i < length; i++)
	{

		firstname[i] = na[i];
	}
	firstname[length] = '\0';
}

void employee::setlastname(char * la)
{
	int length = 0;
	for (int i = 0; la[i] != '\0'; i++)
	{
		length++;
	}
	lastname = new char[length + 1];
	for (int i = 0; i < length; i++)
	{

		lastname[i] = la[i];
	}
	lastname[length] = '\0';
}

void employee::sethourlyrate(double hr )
{
	hourlyrate = hr;
}

void employee::sethours(double hor)
{
	hours = hor;
}

char * employee::getfirstname()
{
	int length = 0;
	for (int i = 0; firstname[i] != '\0'; i++)
	{
		length++;
	}
	char * temp = new char[length + 1];
	for (int i = 0; i < length; i++)
	{

		temp[i] = firstname[i];
	}
	temp[length] = '\0';
	return temp;
}

char * employee::getlastname()
{
	int length = 0;
	for (int i = 0; lastname[i] != '\0'; i++)
	{
		length++;
	}
	char * temp = new char[length + 1];
	for (int i = 0; i < length; i++)
	{

		temp[i] = lastname[i];
	}
	temp[length] = '\0';
	return temp;
}

double employee::gethourlyrate()
{
	return hourlyrate;
}

double employee::gethours()
{
	return hours;
}

void employee :: printpayroll()
{
	salary = hourlyrate * hours;
	cout << "FIRSTNAME : " << firstname << " LASTNAME : " << lastname << endl;

	cout << "WORKHOURS : " << hours << endl;

	cout << "HOURLYRATE :" << hourlyrate << endl;

	cout << "SALARY :" << salary << endl;

}

void employee::addsalary()
{
	if (salary < 500)
	{
		salary = salary + 10;
		cout << "ADD UP SALARY : " << salary << endl;
	}
}

void employee::addwork()
{
	double average;
	average = hours / 7;
	if (average > 6)
	{
		salary = salary + 5;
		cout << "AFTER OVERWORK SALARY : " << salary << endl;
	}
}




