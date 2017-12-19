/*************************************************************************
	> File Name:	main.cpp
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2017-12-19 00:09:15
	> Description:	
************************************************************************/

#include <iostream>
#include "CoffeeA.h"
#include "CoffeeB.h"
#include "CoffeeDecoratorX.h"
#include "CoffeeDecoratorY.h"

using namespace std;

int main(){
    CoffeeA a;
    CoffeeB b;
    CoffeeDecoratorX c(a);
    CoffeeDecoratorY d(b);

    CoffeeDecoratorY e(c);
    CoffeeDecoratorX f(d);

    CoffeeDecoratorX g(c);
    CoffeeDecoratorY h(d);
    
    CoffeeDecoratorX i(e);
    CoffeeDecoratorY j(f);

    cout << "Name\t\tCost" << endl;
    cout << a.getDescription() << "\t" << a.cost() << endl;
    cout << b.getDescription() << "\t" << b.cost() << endl;
    cout << c.getDescription() << "\t" << c.cost() << endl;
    cout << d.getDescription() << "\t" << d.cost() << endl;
    cout << e.getDescription() << "\t" << e.cost() << endl;
    cout << f.getDescription() << "\t" << f.cost() << endl;
    cout << g.getDescription() << "\t" << g.cost() << endl;
    cout << h.getDescription() << "\t" << h.cost() << endl;
    cout << i.getDescription() << "\t" << i.cost() << endl;
    cout << j.getDescription() << "\t" << j.cost() << endl;

    return 0;
}