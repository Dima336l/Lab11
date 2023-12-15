CXX = g++
CXXFLAGS = -Wall -Wextra -Wpedantic

maths_tests: maths_tests.cpp maths.o
	$(CXX) $(CXXFLAGS) -o $@ $^

maths.o: maths.cpp maths.h
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	$(RM) *.o maths_tests
