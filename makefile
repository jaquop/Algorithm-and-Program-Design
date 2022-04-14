driver: driver.o lib1.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -std=c++11 -c -o $@ $<

clean:
	$(RM) *.o driver
