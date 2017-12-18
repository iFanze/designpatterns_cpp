/*************************************************************************
	> File Name:	DisplayOne.cpp
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017年12月17日 星期日 17时25分00秒
 ************************************************************************/

#include <iostream>
#include <memory>
#include "DisplayOne.h"

using namespace std;

DisplayOne::DisplayOne(Subject& subject)
	: weatherData(subject){
}

void DisplayOne::observe(){
	this->weatherData.registerObserver(dynamic_pointer_cast<DisplayOne>(shared_from_this()));
}

void DisplayOne::update(float temp, float humidity, float pressure){
	this->temp = temp;
	this->humidity = humidity;
	this->pressure = pressure;
	display();
}

void DisplayOne::display(){
	cout << "======One======" << endl;
	cout << "\ttemp:\t" << this->temp << endl;
	cout << "\thumi:\t" << this->humidity << endl;
	cout << "\tpres:\t" << this->pressure << endl;
	cout << "====One End====" << endl;
}