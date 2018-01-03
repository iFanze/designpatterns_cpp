/*************************************************************************
	> File Name:	IPizzaStore.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	Tue 19 Dec 2017 02:47:53 PM CST
	> Description:	
 ************************************************************************/

#pragma once

#include <string>
#include <memory>
#include "IPizza.h"

using namespace std;

class PizzaStore{
	public: 
		virtual shared_ptr<Pizza> createPizza(string type) = 0;

		shared_ptr<Pizza> orderPizza(string type){
			shared_ptr<Pizza> pizza = createPizza(type);
			if(pizza){
				pizza->prepare();
				pizza->cook();
				pizza->box();
			}
			return pizza;
		}

};