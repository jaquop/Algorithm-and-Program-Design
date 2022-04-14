FLAG = -std=c++11 -Wall -Wextra
RM = rm -f

all: main round

# Multi-step compilation
main: main.o my-math.o
	g++ -o $@ $^

main.o: main.cpp my-math.hpp
	g++ $(FLAG) -c -o $@ $<

my-math.o: my-math.cpp my-math.hpp
	g++ $(FLAG) -c -o $@ $<

# one step compilation
round: round.cpp
	g++ $(FLAG) -o $@ $^

# build tests
test: test.o my-math.o
	g++ -o $@ $^

test.o: test.cpp my-math.hpp
	g++ $(FLAG) -c -o $@ $<

# run tests
test-all: test
	./test

clean:
	$(RM) *.o main round test
