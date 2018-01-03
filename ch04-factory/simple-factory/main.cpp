/*************************************************************************
	> File Name:	main.cpp
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	Tue 19 Dec 2017 03:02:38 PM CST
	> Description:	
 ************************************************************************/

#include <iostream>
#include "IPizza.h"
#include "PizzaStore.h"

using namespace std;

int main(){
	SimplePizzaFactory factory;
	PizzaStore store(factory);
	shared_ptr<Pizza> pizzaA = store.orderPizza("A");
	shared_ptr<Pizza> pizzaB = store.orderPizza("B");
	shared_ptr<Pizza> pizzaC = store.orderPizza("C");
	return 0;
}