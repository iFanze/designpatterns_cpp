/*************************************************************************
	> File Name:	main.cpp
	> Author:		Meng Fanze
	> Mail:			ifanze@outlook.com
	> Created Time:	2018-01-04 20:46:39
	> Description:	
************************************************************************/

#include "LightOnCommand.h"
#include "SimpleRemoteControl.h"

int main(){
    SimpleRemoteControl remote;
    Light light;
    shared_ptr<LightOnCommand> lightOn = make_shared<LightOnCommand>(light);
    remote.setCommand(lightOn);
    remote.pressButton();
    return 0;
}