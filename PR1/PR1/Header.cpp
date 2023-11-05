#include "Header.h"
#include <iostream>

using namespace std;

class Time
{
	int hours;
	int minutes;
	int seconds;
	int getHours() const
	{
		return hours;
	}
	void setHours(int hours1) {
		hours = hours1;
	}

	int getMinutes() const
	{
		return minutes;
	}
	
	void setMinuted(int minutes1) {
		minutes = minutes1;
	}

	int getSeconds() const
	{
		return seconds;
	}
	void setSeconds(int seconds1) {
		seconds = seconds1;
	}

	Time(int hours, int minutes, int seconds)
	{
		this->hours = hours;
		this->minutes = minutes;
		this->seconds = seconds;
	}

	Time() {
		this->hours = 0;
		this->minutes = 0;
		this->seconds = 0;
	}

	Time(const Time& other)
	{
		this->hours = other.hours;
		this->minutes = other.minutes;
		this->seconds = other.seconds;
	}
};

void printData(Time time) {
	cout << time.getHours() << ":" << time.getMinutes() << ":" << time.getSeconds() << endl;
}
