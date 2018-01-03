/*************************************************************************
	> File Name:	PizzaB.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	Tue 19 Dec 2017 02:47:27 PM CST
	> Description:	
 ************************************************************************/

#pragma once

#include <iostream>
#include "IPizza.h"

using namespace std;

class PizzaB : public Pizza{
	public:
		void prepare() override { cout << "PizzaB preparing..." << endl; }
		void cook() override { cout << "PizzaB cooking..." << endl; }
		void box() override { cout << "PizzaB boxing..." << endl; }
};
