/*************************************************************************
	> File Name:	ICoffee.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017-12-18 23:15:43
	> Description:	
************************************************************************/

#pragma once

#include <string>

class Coffee{
    public:
        virtual std::string getDescription(){ return description; }
        virtual float cost() = 0;

    protected:
        std::string description = "Unknown Coffee";
};