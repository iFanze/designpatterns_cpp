/*************************************************************************
	> File Name:	CoffeeDecoratorY.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017-12-19 00:24:05
	> Description:	
************************************************************************/

#pragma once

#include "ICoffeeDecorator.h"

class CoffeeDecoratorY : public CoffeeDecorator{
    public:
        CoffeeDecoratorY(Coffee& coffee) : coffee(coffee) {}
        virtual std::string getDescription() override { return coffee.getDescription() + ",+Y"; }
        virtual float cost() override { return coffee.cost() + 4; }
    private:
        Coffee& coffee;
};
