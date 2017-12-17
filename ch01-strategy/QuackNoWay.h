/*************************************************************************
	> File Name:	QuackNoWay.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017年12月16日 星期六 14时42分17秒
 ************************************************************************/
#pragma once

#include "IQuackBehavior.h"

class QuackNoWay : public QuackBehavior{
    public:
		virtual void quack() override;
};
