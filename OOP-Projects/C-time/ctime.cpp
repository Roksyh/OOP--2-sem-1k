#include "ctime.h"
CTime::CTime(){
	hours = 0;
	minutes = 0;
	seconds = 0;
}

CTime::CTime(int hours_, int minutes_, int seconds_) 
{
	hours = hours_;
	minutes = minutes_;
	seconds = seconds_;
}