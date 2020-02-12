CXXFLAGS=-Wall
CXX=g++

assign1: assign1.o Value3.o
	$(CXX) -o $@ $^

assign2: assign2.o
	$(CXX) -o $@ $^

assign3: assign3.o
	$(CXX) -o $@ $^

class7: class7.o
	$(CXX) -o $@ $^

class8: class8.o
	$(CXX) -o $@ $^

class9: class9.o
	$(CXX) -o $@ $^

class10: class10.o
	$(CXX) -o $@ $^

#opequal: opequal.o
#	$(CXX) -o $@ $^

opequal2: opequal2.o
	$(CXX) -o $@ $^

noequal: noequal.o
	$(CXX) -o $@ $^

overload1: overload1.o
	$(CXX) -o $@ $^

overload2: overload2.o
	$(CXX) -o $@ $^

plus1: plus1.o
	$(CXX) -o $@ $^

plus2: plus2.o
	$(CXX) -o $@ $^

plus3: plus3.o
	$(CXX) -o $@ $^

plus4: plus4.o
	$(CXX) -o $@ $^

except1: except1.o
	$(CXX) -o $@ $^

except2: except2.o
	$(CXX) -o $@ $^

useValue: useValue.o
	$(CXX) -o $@ $^

execs = assign1 assign2 assign3 class7 class8 class9 class10 \
        opequal opequal2 noequal overload1 overload2 \
        plus1 plus2 plus3 plus4 except1 except2 useValue

clean:
	rm -f $(execs) *.o
