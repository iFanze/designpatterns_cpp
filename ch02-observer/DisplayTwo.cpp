/*************************************************************************
	> File Name:	DisplayTwo.cpp
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017年12月17日 星期日 17时25分19秒
 ************************************************************************/

#include <iostream>
#include <memory>
#include "DisplayTwo.h"

using namespace std;

DisplayTwo::DisplayTwo(Subject& subject)
	: weatherData(subject){
}

void DisplayTwo::observe(){
	this->weatherData.registerObserver(dynamic_pointer_cast<DisplayTwo>(shared_from_this()));
}

void DisplayTwo::update(float temp, float humidity, float pressure){
	this->temp = temp;
	this->humidity = humidity;
	this->pressure = pressure;
	display();
}

void DisplayTwo::display(){
	cout << "======Two======" << endl;
	cout << "\ttemp:\t" << this->temp << endl;
	cout << "\thumi:\t" << this->humidity << endl;
	cout << "\tpres:\t" << this->pressure << endl;
	cout << "====Two End====" << endl;
}