/*************************************************************************
	> File Name:	WeatherData.cpp
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017年12月17日 星期日 15时20分04秒
 ************************************************************************/

#include <algorithm>
#include "WeatherData.h"

WeatherData::WeatherData(){

}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure){
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	measurementsChanged();
}
void WeatherData::measurementsChanged(){
	this->notifyObserver();
}

void WeatherData::registerObserver(shared_ptr<Observer> observer){
	weak_ptr<Observer> weak_observer(observer);
	observers.push_back(weak_observer);
}

void WeatherData::removeObserver(shared_ptr<Observer> observer){
	remove_if(observers.begin(), observers.end(), 
		[=](std::weak_ptr<Observer>& p){ return !(p.owner_before(observer) || observer.owner_before(p));});
}

void WeatherData::notifyObserver(){
	for(auto pObserver : observers)
		if (shared_ptr<Observer> pSharedObserver = pObserver.lock())
			pSharedObserver->update(this->temperature, this->humidity, this->pressure);	
}

