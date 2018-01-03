/*************************************************************************
	> File Name:	PizzaStoreX.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	Fri 22 Dec 2017 07:44:18 PM CST
	> Description:	
 ************************************************************************/

#pragma once

#include "IPizza.h"
#include "IPizzaStore.h"
#include "IPizzaIngredientFactory.h"
#include "PizzaIngredient.h"

class PizzaIngredientFactoryX : public PizzaIngredientFactory{
	public:
		virtual shared_ptr<IngredientA> createIngredientA() override{
			return make_shared<IngredientA1>();
		}
		virtual shared_ptr<IngredientB> createIngredientB() override{
			return make_shared<IngredientB1>();
		}
		virtual shared_ptr<IngredientC> createIngredientC() override{
			return make_shared<IngredientC1>();
		}
};

class PizzaAX : public Pizza{
	public:
		PizzaAX(PizzaIngredientFactory& ingredientFactory) : Pizza("PizzaAX"), ingredientFactory(ingredientFactory){}
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

class PizzaBX : public Pizza{
	public:
		PizzaBX(PizzaIngredientFactory& ingredientFactory) : Pizza("PizzaBX"), ingredientFactory(ingredientFactory){}
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

class PizzaStoreX : public PizzaStore{
	public:
		virtual shared_ptr<Pizza> createPizza(string type) override {
			shared_ptr<Pizza> ptr;
			if(type == "A")
				ptr = make_shared<PizzaAX>(factoryX);
			else if(type == "B")
				ptr = make_shared<PizzaBX>(factoryX);
			return ptr;
		}
	private:
		PizzaIngredientFactoryX factoryX;
};