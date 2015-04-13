#ifndef TIME_H
#define TIME_H

#include <iostream>

class Time
{
private:
	int hours;
	int minutes;
public:
	Time(int hours, int minutes);
	~Time();
	//Mutators and Accessors
	void set(int hours, int minutes);
	void get(int &hours, int &minutes);

	//Overloaded operators
	Time operator++(int);
	friend std::ostream & operator<<(std::ostream &os, Time &t);
};
#endif
