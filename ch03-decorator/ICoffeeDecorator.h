/*************************************************************************
	> File Name:	ICoffeeDecorator.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017-12-18 23:18:33
	> Description:	
************************************************************************/

#pragma once

#include "ICoffee.h"

class CoffeeDecorator : public Coffee{
    public:
        virtual std::string getDescription() = 0;
};