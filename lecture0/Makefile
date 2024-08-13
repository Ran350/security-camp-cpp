CXX = g++
CXXFLAGS = -Wall -std=c++2b
TARGET = main
SRCS = Main.cpp
OBJS = $(SRCS:.cpp=.o)
DEPS = MyLib/Common.hpp


all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean