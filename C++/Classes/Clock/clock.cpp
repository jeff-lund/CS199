#include <iostream>
using namespace std;
#include "clock.h"

Clock::Clock()
{
    hour = 0;
    minute = 0;
    second = 0;
}

void Clock::setTime(int hr, int min, int sec)
{
    if(hr >= 0 && hr < 24)
        hour = hr;
    else
	    hour = 0;

    if(min >= 0 && min < 60)
        minute = min;
    else
		  minute = 0;

    if(sec >= 0 && sec < 60)
		  second = sec;
    else
		  second = 0;

    return;
}

void Clock::getTime(int& hr, int& min, int& sec)
{
    hr = hour;
    min = minute;
    sec = second;

    return;
}

void Clock::printTime()
{
    cout << "The current time is ";
    if(hour < 10)
      cout << "0";
    cout << hour << ":";
    if(minute < 10)
      cout << "0";
    cout << minute << ":";
    if(second < 10)
      cout << "0";
    cout << second << "." << endl;

    return;
}

void Clock::incrementSeconds()
{
    // Your code here
    return;
}

void Clock::incrementMinutes()
{
    // Your code here
    return;
}

void Clock::incrementHours()
{
    // Your code here
    return;
}
