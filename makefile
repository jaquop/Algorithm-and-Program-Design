SHELL=/bin/bash
TARGETS=main
CXX=g++
FLAGS=-std=c++11 -Wall
RM=rm -rf

.PHONY: clean

all: $(TARGETS)

# Target rules
main: main.o patient.o text-menu-app.o appointments.o
	$(CXX) -o $@ $^

# General compilation rules
%.o: %.cpp
	$(CXX) $(FLAGS) -c $<

test:
	echo $(SHELL)

# Rule to test run your code with the exact same input used in the sample run
test1: main
	echo -e "1\n2\n3\nbad name\nFernande Weatherman\n8\n2\n3\nLogan Beverage\n8\n9\n2\n4\n10\n9\n2\n5\n" | ./main

clean:
	$(RM) *.o $(TARGETS) *.gc* *.dSYM
