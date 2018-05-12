/*************************************************************************
	> File Name:	SimpleRemoteControl.h
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2018-01-04 20:42:34
	> Description:	
************************************************************************/

#pragma once

#include <memory>
#include "LightOnCommand.h"

using namespace std;

class SimpleRemoteControl{
    public:
        void setCommand(shared_ptr<Command> command){ slot = command; }
        void pressButton(){ slot->execute(); }
    private:
        shared_ptr<Command> slot;
};