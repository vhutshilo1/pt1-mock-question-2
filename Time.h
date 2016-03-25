//creating a class
#ifndef TIME_H
#define TIME_H
#include<iostream>
using namespace std;
//class Time declaration
class Time
{
private:
	//declaration of privaate data members.
	int Hours; //These could be declared in one line like so,
	int Mins; //int Hours,Mins;

public:
	//declaration of public members(member functions).

	Time(int hours = 0, int mins = 0);//Declare constructor(with default values)
	~Time();						   // and Destructor.

	void set(int, int);				//mutator function declaration.
	int get(int, int);				//accessor function.

	friend ostream& operator<<(ostream&, const Time&);
	Time operator++(int);

};                                 
#endif
//done