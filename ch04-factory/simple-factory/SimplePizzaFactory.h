/*************************************************************************
	> File Name:	SimplePizzaFactory.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	Tue 19 Dec 2017 02:47:44 PM CST
	> Description:	
 ************************************************************************/

#pragma once

#include <string>
#include <memory>
#include "IPizza.h"

using namespace std;

class SimplePizzaFactory {
	public:
		shared_ptr<Pizza> createPizza(string type);
};