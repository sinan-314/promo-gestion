main = src/main.cpp
promo = src/sources/promo.cpp
student = src/sources/student.cpp


build : 
	clang++ -o promo $(main) $(promo) $(student) 

run :
	clang++ -o promo $(main) $(promo) $(student) 
	clear
	./promo

clean : 
	rm promo 
	clear