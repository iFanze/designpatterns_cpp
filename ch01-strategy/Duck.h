/*************************************************************************
	> File Name:    Duck.h
	> Author:       Meng Fanze
	> Mail:         ifanze@outlook.com
	> Created Time: 2017年12月14日 星期四 23时34分43秒
 ************************************************************************/
#pragma once

#include <memory>
#include "IFlyBehavior.h"
#include "IQuackBehavior.h"

using namespace std;

class Duck{
    public:
        void swim();
        void display();
        
        void setFlyBehavior(shared_ptr<FlyBehavior> val);
        void setQuackBehavior(shared_ptr<QuackBehavior> val);

        void performFly();
        void performQuack();

    private:
        shared_ptr<FlyBehavior> flyBehavior;
        shared_ptr<QuackBehavior> quackBehavior;
};
