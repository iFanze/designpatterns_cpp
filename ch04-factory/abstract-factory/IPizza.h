/*************************************************************************
	> File Name:	Pizza.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	Tue 19 Dec 2017 02:46:59 PM CST
	> Description:	
 ************************************************************************/

#pragma once

#include <string>
#include <iostream>
#include <memory>
#include "IPizzaIngredient.h"

using namespace std;

class Pizza
{
	public:
		Pizza(string name) : name(name){}

		virtual void prepare() = 0;

		virtual void cook(){
			cout << "Cooking " << name << endl;
			cout << "about 15 minutes..." << endl;
		}
		virtual void box(){
			cout << "Boxing " << name << endl;
			cout << "about 5 minutes..." << endl;
		}

	protected:
		string name;
		shared_ptr<IngredientA> ingredientA;
		shared_ptr<IngredientB> ingredientB;
		shared_ptr<IngredientC> ingredientC;
};