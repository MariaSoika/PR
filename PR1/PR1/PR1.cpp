#include <iostream>
#include "Header.h"
using namespace std;

class Time
{
	int hours;
	int minutes;
	int seconds;
	int getHours()
	{
		return hours;
	}
	void setHours(int hours1) {
		hours = hours1;
	}

	int getMinutes()
	{
		return minutes;
	}
	void setMinuted(int minutes1) {
		minutes = minutes1;
	}

	int getSeconds()
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

int main()
{
	Time time1;
	printData(time1);

	Time time2(22, 54, 21);
	printData(time2);

	Time time3(time2);
	printData(time3);

	return 0;
}