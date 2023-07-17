#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	int salary;
	int sale;
	float comm;
	cout<<"Enter Name   : ";
	cin >> name;
	cout<<"Enter Salary : ";
	cin>> salary;
	cout<<"Enter Sale   : ";
	cin>> sale;
	cout<<"Enter Commission Percent : ";
	cin>> comm;
	cout<<"************output***********"<<endl;
	cout<<"Total Reveune "<<salary+(sale*(comm/100))<<endl;
	cout<<"---------------------"<<endl;
	system("pause");
	return(0);
}