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

using namespace std;

class Pizza
{
	public:
		Pizza(string name, string ingredientA, string ingredientB, string ingredientC) : 
			name(name), ingredientA(ingredientA), ingredientB(ingredientB), ingredientC(ingredientC){}

		virtual void prepare(){
			cout << "Preparing " << name << endl;
			cout << "Adding ingredientA..." << endl;
			cout << "Adding ingredientB..." << endl;
			cout << "Adding ingredientC..." << endl;
		}
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
		string ingredientA;
		string ingredientB;
		string ingredientC;
};