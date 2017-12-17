/*************************************************************************
	> File Name:    Duck.cpp
	> Author:       Meng Fanze
	> Mail:         ifanze@outlook.com
	> Created Time: 2017年12月14日 星期四 23时47分05秒
 ************************************************************************/

#include <iostream>
#include "Duck.h"
using namespace std;

void Duck::swim(){
    cout << "Duck swim." << endl;
}

void Duck::display(){
    cout << "Duck display." << endl;
}

void Duck::setFlyBehavior(shared_ptr<FlyBehavior> val){
    flyBehavior = val;
}

void Duck::setQuackBehavior(shared_ptr<QuackBehavior> val){
    quackBehavior = val;
}

void Duck::performFly(){
    flyBehavior->fly();
}

void Duck::performQuack(){
    quackBehavior->quack();
}
