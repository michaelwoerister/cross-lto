no-lto: main.cpp dosomething.cpp common.h
	clang++ main.cpp dosomething.cpp -c -O2
	clang++ main.o dosomething.o -o proggy -O2
	./proggy

lto: main.cpp dosomething.cpp common.h
	clang++ -flto=thin -O2 main.cpp dosomething.cpp -c 
	clang++ -flto=thin -O2 main.o dosomething.o -o proggy
	./proggy