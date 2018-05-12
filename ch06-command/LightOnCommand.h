/*************************************************************************
	> File Name:	LightOnCommand.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2018-01-04 20:10:26
	> Description:	
************************************************************************/

#pragma once

#include <iostream>
#include "ICommand.h"

using namespace std;

class Light{
    public:
        void on(){
            cout << "Light ON." << endl;
        }
};

class LightOnCommand : public Command {
    public:
        LightOnCommand(Light& light_) : light(light_){}
        void execute() override {
            light.on();
        }
    private:
        Light& light;
};