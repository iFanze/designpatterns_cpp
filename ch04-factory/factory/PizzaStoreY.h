/*************************************************************************
	> File Name:	PizzaStoreY.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	Fri 22 Dec 2017 07:43:33 PM CST
	> Description:	
 ************************************************************************/

#pragma once

#include "IPizza.h"
#include "IPizzaStore.h"

class PizzaAY : public Pizza{
	public:
		PizzaAY() : Pizza("PizzaAY", "ingredientA in PizzaAY", "ingredientB in PizzaAY", "ingredientC in PizzaAY"){}
};

class PizzaBY : public Pizza{
	public:
		PizzaBY() : Pizza("PizzaBY", "ingredientA in PizzaBY", "ingredientB in PizzaBY", "ingredientC in PizzaBY"){}
};

class PizzaStoreY : public PizzaStore{
	public:
		virtual shared_ptr<Pizza> createPizza(string type) override {
			shared_ptr<Pizza> ptr;
			if(type == "A")
				ptr = make_shared<PizzaAY>();
			else if(type == "B")
				ptr = make_shared<PizzaBY>();
			return ptr;
		}
};