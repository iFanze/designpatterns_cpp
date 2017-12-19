/*************************************************************************
	> File Name:	CoffeeB.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017-12-19 00:08:01
	> Description:	
************************************************************************/

#pragma once

#include "ICoffee.h"

class CoffeeB : public Coffee{
	public:
		CoffeeB(){ this->description = "Coffee B"; }
		virtual float cost() override { return 30; }
};