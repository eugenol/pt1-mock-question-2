#include "Time.h"


Time::Time(int hours = 0, int minutes = 0) : hours(), minutes()
{
	if (hours >= 0 && hours <= 23 && minutes >= 0 && minutes <= 59)
	{
		Time::hours = hours;
		Time::minutes = minutes;
	}
	else
			std::cout << "Error: invalid time entered, Time set to midnight" << std::endl;
}


Time::~Time()
{
}


void Time::set(int hours, int minutes)
{
	if (hours >= 0 && hours <= 23 && minutes >= 0 && minutes <= 59)
	{
		Time::hours = hours;
		Time::minutes = minutes;
	}
	else
		std::cout << "Error: invalid time entered, Time set to midnight" << std::endl;
}
void Time::get(int &hours, int &minutes)
{
	hours = Time::hours;
	minutes = Time::minutes;
}

Time Time::operator++(int)
{
	Time temp(hours, minutes);

	minutes++;
	hours = hours + minutes / 60;
	hours = hours % 24;
	minutes = minutes % 60;

	return temp;
}

std::ostream operator << (std::ostream os, Time t)
{
	std::cout << t.hours << ":" << t.minutes << std::endl;
}