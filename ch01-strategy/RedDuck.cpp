/*************************************************************************
	> File Name:	RedDuck.cpp
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017年12月17日 星期日 17时38分30秒
 ************************************************************************/

#include "RedDuck.h"
#include "FlyWithWings.h"
#include "QuackGua.h"

RedDuck::RedDuck(){
	setQuackBehavior(shared_ptr<QuackBehavior>(new QuackGua));
	setFlyBehavior(shared_ptr<FlyBehavior>(new FlyWithWings));
}