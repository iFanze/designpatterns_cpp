/*************************************************************************
	> File Name:	CoffeeA.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017-12-18 23:58:19
	> Description:	
************************************************************************/

#pragma once

#include "ICoffee.h"

class CoffeeA : public Coffee{
	public:
		CoffeeA(){ this->description = "Coffee A"; }
		virtual float cost() override { return 20; }
};