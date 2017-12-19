/*************************************************************************
	> File Name:	CoffeeDecoratorX.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017-12-19 00:16:50
	> Description:	
************************************************************************/

#pragma once

#include "ICoffeeDecorator.h"

class CoffeeDecoratorX : public CoffeeDecorator{
    public:
        CoffeeDecoratorX(Coffee& coffee) : coffee(coffee) {}
        virtual std::string getDescription() override { return coffee.getDescription() + ",+X"; }
        virtual float cost() override { return coffee.cost() + 2; }
    private:
        Coffee& coffee;
};