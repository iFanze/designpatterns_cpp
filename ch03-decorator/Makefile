CC = g++
CCFLAG = --std=gnu++11 -O0 -Wall -c
LD = g++

main: main.o
	$(LD) $^ -o $@

%.o: %.cpp 
	$(CC) $(CCFLAG) $^ -o $@

.PHONY: clean
clean:
	rm *.o
	rm main