/*************************************************************************
	> File Name:	Observer.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017年12月17日 星期日 15时21分27秒
 ************************************************************************/

#pragma once

#include <iostream>
#include <memory>

class Observer : public std::enable_shared_from_this<Observer>{
	public:
		virtual void observe() = 0;
		virtual void update(float temp, float humidity, float pressure) = 0;
};