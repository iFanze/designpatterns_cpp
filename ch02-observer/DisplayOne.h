/*************************************************************************
	> File Name:	DisplayOne.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017年12月17日 星期日 17时24分51秒
 ************************************************************************/

#pragma once

#include "ISubject.h"
#include "IObserver.h"
#include "IDisplayElement.h"

class DisplayOne : public Observer, public DisplayElement{
	public:
		DisplayOne(Subject& weatherData);
		virtual void observe() override;
	  	virtual void update(float temp, float humidity, float pressure) override;
		virtual void display() override;

	private:
		float temp;
		float humidity;
		float pressure;

		Subject& weatherData;
};