/*************************************************************************
	> File Name:	IPizzaIngredientFactory.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	Mon 25 Dec 2017 05:14:20 PM CST
	> Description:	
 ************************************************************************/

#pragma once

#include <memory>
#include "IPizzaIngredient.h"

using namespace std;

class PizzaIngredientFactory{
	public:
		virtual shared_ptr<IngredientA> createIngredientA() = 0;
		virtual shared_ptr<IngredientB> createIngredientB() = 0;
		virtual shared_ptr<IngredientC> createIngredientC() = 0;
};