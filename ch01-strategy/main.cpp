/*************************************************************************
	> File Name:    main.cpp
	> Author:       Meng Fanze
	> Mail:         ifanze@outlook.com
	> Created Time: 2017年12月16日 星期六 14时52分36秒
 ************************************************************************/
#include "RedDuck.h"
#include "GreenDuck.h"
#include "FlyWithWings.h"

int main()
{
    RedDuck red;
    red.performQuack();
    red.performFly();;

    GreenDuck green;
    green.performQuack();
    green.performFly();

    green.setFlyBehavior(shared_ptr<FlyBehavior>(new FlyWithWings));
    green.performFly();

    return 0;
}
