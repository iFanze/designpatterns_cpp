/*************************************************************************
	> File Name:	main.cpp
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017-12-17 15:36:01
************************************************************************/

#include "WeatherData.h"
#include "DisplayOne.h"
#include "DisplayTwo.h"

int main(){
	WeatherData weather;

	shared_ptr<DisplayOne> one(new DisplayOne(weather));
	one->observe();
	shared_ptr<DisplayTwo> two(new DisplayTwo(weather));
	two->observe();

	weather.setMeasurements(1.0, 2.0, 3.0);
	weather.setMeasurements(4.0, 5.0, 6.0);
	
    return 0;
}