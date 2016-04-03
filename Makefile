lab3_qA: lab3_qA.o
	g++ -o lab3_qA lab3_qA.o

lab3_qA.o: lab3_qA.cpp
	g++ -c lab3_qA.cpp