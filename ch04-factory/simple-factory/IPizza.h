/*************************************************************************
	> File Name:	Pizza.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	Tue 19 Dec 2017 02:46:59 PM CST
	> Description:	
 ************************************************************************/

#pragma once

class Pizza
{
	public:
		virtual void prepare() = 0;
		virtual void cook() = 0;
		virtual void box() = 0;
};