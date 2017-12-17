/*************************************************************************
	> File Name:	FlyNoWay.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017年12月16日 星期六 14时35分39秒
 ************************************************************************/
#pragma once

#include "IFlyBehavior.h"

class FlyNoWay : public FlyBehavior {
    public:
		virtual void fly() override;
};
