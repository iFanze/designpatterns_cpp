CC = g++
CCFLAG = --std=gnu++11 -O0 -Wall -c
LD = g++

main: Duck.o RedDuck.o GreenDuck.o FlyNoWay.o FlyWithWings.o QuackNoWay.o QuackGua.o main.o
	$(LD) $^ -o $@

%.o: %.cpp 
	$(CC) $(CCFLAG) $^ -o $@

.PHONY: clean
clean:
	rm *.o
	rm main