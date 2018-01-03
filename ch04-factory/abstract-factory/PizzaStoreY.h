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
#include "IPizzaIngredientFactory.h"
#include "PizzaIngredient.h"

class PizzaIngredientFactoryY : public PizzaIngredientFactory{
	public:
		virtual shared_ptr<IngredientA> createIngredientA() override{
			return make_shared<IngredientA2>();
		}
		virtual shared_ptr<IngredientB> createIngredientB() override{
			return make_shared<IngredientB2>();
		}
		virtual shared_ptr<IngredientC> createIngredientC() override{
			return make_shared<IngredientC2>();
		}
};

class PizzaAY : public Pizza{
	public:
		PizzaAY(PizzaIngredientFactory& ingredientFactory) : Pizza("PizzaAY"), ingredientFactory(ingredientFactory){}
		virtual void prepare() override{
			cout << "Preparing " << name << endl;
			cout << "Adding ingredientA..." << endl;
			ingredientA = ingredientFactory.createIngredientA();
			cout << "Adding ingredientB..." << endl;			
			ingredientB = ingredientFactory.createIngredientB();
			cout << "Adding ingredientC..." << endl;			
			ingredientC = ingredientFactory.createIngredientC();
		}
	private:
		PizzaIngredientFactory& ingredientFactory;	
};

class PizzaBY : public Pizza{
	public:
		PizzaBY(PizzaIngredientFactory& ingredientFactory) : Pizza("PizzaBY"), ingredientFactory(ingredientFactory){}	
		virtual void prepare() override{
			cout << "Preparing " << name << endl;
			cout << "Adding ingredientA..." << endl;
			ingredientA = ingredientFactory.createIngredientA();
			cout << "Adding ingredientB..." << endl;			
			ingredientB = ingredientFactory.createIngredientB();
			cout << "Adding ingredientC..." << endl;			
			ingredientC = ingredientFactory.createIngredientC();
		}
	private:
		PizzaIngredientFactory& ingredientFactory;	
};

class PizzaStoreY : public PizzaStore{
	public:
		virtual shared_ptr<Pizza> createPizza(string type) override {
			shared_ptr<Pizza> ptr;
			if(type == "A")
				ptr = make_shared<PizzaAY>(factoryY);
			else if(type == "B")
				ptr = make_shared<PizzaBY>(factoryY);
			return ptr;
		}
	private:
		PizzaIngredientFactoryY factoryY;	
};