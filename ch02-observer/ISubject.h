/*************************************************************************
	> File Name:	Subject.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017年12月17日 星期日 14时39分51秒
 ************************************************************************/

#pragma once

#include <memory>
#include "IObserver.h"

using namespace std;

class Subject
{
  	public:
		virtual void registerObserver(shared_ptr<Observer> observer) = 0;
		virtual void removeObserver(shared_ptr<Observer> observer) = 0;
		virtual void notifyObserver() = 0;
};