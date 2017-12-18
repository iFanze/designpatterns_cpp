/*************************************************************************
	> File Name:    WeatherData.h
	> Author:       Meng Fanze
	> Mail:         ifanze@outlook.com
	> Created Time: 2017年12月17日 星期日 14时54分10秒
 ************************************************************************/

#pragma once

#include <vector>
#include "IObserver.h"
#include "ISubject.h"

using namespace std;

class WeatherData : public Subject{
    public:
        WeatherData();
        void setMeasurements(float temperature, float humidity, float pressure);
        void measurementsChanged();

        virtual void registerObserver(shared_ptr<Observer> observer) override;
		virtual void removeObserver(shared_ptr<Observer> observer) override;
		virtual void notifyObserver() override;

    private:
        float temperature;
        float humidity;
        float pressure;

        vector<weak_ptr<Observer> > observers;
};
