#pragma once
#ifndef TIME_H
#define TIME_H

class Time
{
public:
    int getHours() const;
    void setHours(int hours1);

    int getMinutes() const;
    void setMinutes(int minutes1);

    int getSeconds() const;
    void setSeconds(int seconds1);

    Time(int hours, int minutes, int seconds);
    Time();
    Time(const Time& other);

private:
    int hours;
    int minutes;
    int seconds;
};

void printData(Time time);

#endif
