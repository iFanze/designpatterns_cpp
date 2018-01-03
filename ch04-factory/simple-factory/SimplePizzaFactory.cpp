/*************************************************************************
	> File Name:	SimplePizzaFactory.cpp
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	Tue 19 Dec 2017 02:54:15 PM CST
	> Description:	
 ************************************************************************/

#include "SimplePizzaFactory.h"
#include "PizzaA.h"
#include "PizzaB.h"

shared_ptr<Pizza> SimplePizzaFactory::createPizza(string type){
	shared_ptr<Pizza> ptr;
	if(type == "A")
		ptr = make_shared<PizzaA>();
	else if(type == "B")
		ptr = make_shared<PizzaB>();
	return ptr;
}
