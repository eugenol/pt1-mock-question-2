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
};
#endif
