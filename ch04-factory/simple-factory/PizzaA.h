/*************************************************************************
	> File Name:	PizzaA.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	Tue 19 Dec 2017 02:47:22 PM CST
	> Description:	
 ************************************************************************/

#pragma once

#include <iostream>
#include "IPizza.h"

using namespace std;

class PizzaA : public Pizza{
	public:
		void prepare() override { cout << "PizzaA preparing..." << endl; }
		void cook() override { cout << "PizzaA cooking..." << endl; }
		void box() override { cout << "PizzaA boxing..." << endl; }
};