a.out : pointClass-4.1.h
	g++ -o usePoint usePointClass-4.2.cpp pointClassImpl-4.1.cpp 

clean :
	rm usePoint

test : 
	usePoint
