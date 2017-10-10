CXX=g++
CXXFLAGS=-std=c++14 -O3
LIBS=
SRCS=$(wildcard *.cpp)
TRG=templFabric
DPNDS=$(wildcard *.h, *.hpp, *.hxx)

all: $(TRG)

$(TRG): $(SRCS) $(DPNDS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@ $(LIBS)

clean:
	rm -f $(TRG)
