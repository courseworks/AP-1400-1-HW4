CXX = g++
CXXFLAGS = -std=c++2a -Wall -I h -I /usr/local/include/gtest/ -c
LXXFLAGS = -std=c++2a -Ih -pthread
OBJECTS = ./obj/human.o ./obj/child.o ./obj/adult.o ./obj/aphw4.o ./obj/main.o ./obj/aphw4_unittest.o
GTEST = /usr/local/lib/libgtest.a
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) -o $(TARGET) $(OBJECTS) $(GTEST)
./obj/human.o: ./cpp/human.cpp  ./h/human.h
	$(CXX) $(CXXFLAGS) ./cpp/human.cpp -o ./obj/human.o
./obj/child.o: ./cpp/child.cpp ./cpp/human.cpp ./h/child.h
	$(CXX) $(CXXFLAGS) ./cpp/child.cpp -o ./obj/child.o
./obj/adult.o: ./cpp/adult.cpp ./cpp/human.cpp ./h/adult.h
	$(CXX) $(CXXFLAGS) ./cpp/adult.cpp -o ./obj/adult.o
./obj/aphw4.o: ./cpp/aphw4.cpp ./h/aphw4.h
	$(CXX) $(CXXFLAGS) ./cpp/aphw4.cpp -o ./obj/aphw4.o
./obj/aphw4_unittest.o: ./cpp/aphw4_unittest.cpp
	$(CXX) $(CXXFLAGS) ./cpp/aphw4_unittest.cpp -o ./obj/aphw4_unittest.o
./obj/main.o: ./cpp/main.cpp
	$(CXX) $(CXXFLAGS) ./cpp/main.cpp -o ./obj/main.o
clean:
	rm -fv $(TARGET) $(OBJECTS)
