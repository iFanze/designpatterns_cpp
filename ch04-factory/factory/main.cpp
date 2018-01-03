/*************************************************************************
	> File Name:	main.cpp
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	Tue 19 Dec 2017 03:02:38 PM CST
	> Description:	
 ************************************************************************/

#include <iostream>
#include "IPizza.h"
#include "PizzaStoreX.h"
#include "PizzaStoreY.h"

using namespace std;

int main(){
	PizzaStoreX storeX;
	shared_ptr<Pizza> pizzaXA = storeX.orderPizza("A");
	shared_ptr<Pizza> pizzaXB = storeX.orderPizza("B");

	PizzaStoreY storeY;
	shared_ptr<Pizza> pizzaYA = storeY.orderPizza("A");
	shared_ptr<Pizza> pizzaYB = storeY.orderPizza("B");
	return 0;
}