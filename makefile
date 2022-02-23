driver.exe: driver.o
	g++ driver.o -o driver.exe -std=c++2a

driver.o: driver.cpp
	g++ -c driver.cpp -o driver.o -std=c++2a

clean:
	rm *.o driver.exe