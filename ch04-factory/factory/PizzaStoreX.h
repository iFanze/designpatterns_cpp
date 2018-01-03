/*************************************************************************
	> File Name:	PizzaStoreX.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	Fri 22 Dec 2017 07:44:18 PM CST
	> Description:	
 ************************************************************************/

#pragma once

#include "IPizza.h"
#include "IPizzaStore.h"

class PizzaAX : public Pizza{
	public:
		PizzaAX() : Pizza("PizzaAX", "ingredientA in PizzaAX", "ingredientB in PizzaAX", "ingredientC in PizzaAX"){}
};

class PizzaBX : public Pizza{
	public:
		PizzaBX() : Pizza("PizzaBX", "ingredientA in PizzaBX", "ingredientB in PizzaBX", "ingredientC in PizzaBX"){}
};

class PizzaStoreX : public PizzaStore{
	public:
		virtual shared_ptr<Pizza> createPizza(string type) override {
			shared_ptr<Pizza> ptr;
			if(type == "A")
				ptr = make_shared<PizzaAX>();
			else if(type == "B")
				ptr = make_shared<PizzaBX>();
			return ptr;
		}
};