/*************************************************************************
	> File Name:	GreenDuck.cpp
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017年12月17日 星期日 17时38分14秒
 ************************************************************************/

#include "GreenDuck.h"
#include "FlyNoWay.h"
#include "QuackNoWay.h"

GreenDuck::GreenDuck(){
	setFlyBehavior(shared_ptr<FlyBehavior>(new FlyNoWay));
	setQuackBehavior(shared_ptr<QuackBehavior>(new QuackNoWay));
}