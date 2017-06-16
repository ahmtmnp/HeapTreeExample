hepsi: derle calistir

derle:
	g++ -I ./include/ -o ./lib/Dugum.o -c ./src/Dugum.cpp
	g++ -I ./include/ -o ./lib/Heap.o -c ./src/Heap.cpp
	g++ -I ./include/ -o ./lib/BST.o -c ./src/BST.cpp
	g++ -I ./include/ -o ./lib/Ulke.o -c ./src/Ulke.cpp
	g++ -I ./include/ -o ./lib/Sehir.o -c ./src/Sehir.cpp
	g++ -I ./include/ -o ./bin/test ./lib/Dugum.o ./lib/Heap.o ./lib/BST.o ./lib/Ulke.o ./lib/Sehir.o ./src/test.cpp
	
calistir:
	./bin/test