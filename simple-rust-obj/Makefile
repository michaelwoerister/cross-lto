all: func.rs
	rm *.o 
	rm *.bc 
	clang++ main.cpp -c -std=c++11
	
	# This works: use bc file instead of object file
	# rustc --crate-type=staticlib --emit=llvm-bc func.rs -Ccodegen-units=1 -Cpanic=abort

	rustc --crate-type=staticlib -O func.rs -Ccodegen-units=1 -Cpanic=abort -Zembed-bitcode
	
	# clang++ main.o func.func0.rcgu.o -o main --verbose
	# ld main.o func.func0.rcgu.bc -o main -plugin=/home/mw/llvm-build/lib/LLVMgold.so
	ld main.o \
	   -o main \
	   -plugin=/home/mw/llvm-build/lib/LLVMgold.so \
	   -lfunc -L. \
	   /usr/bin/../lib/gcc/x86_64-redhat-linux/7/../../../../lib64/crt1.o \
	   /usr/bin/../lib/gcc/x86_64-redhat-linux/7/../../../../lib64/crti.o /usr/bin/../lib/gcc/x86_64-redhat-linux/7/crtbegin.o -L/usr/bin/../lib/gcc/x86_64-redhat-linux/7 -L/usr/bin/../lib/gcc/x86_64-redhat-linux/7/../../../../lib64 -L/usr/bin/../lib64 -L/lib/../lib64 -L/usr/lib/../lib64 -L/usr/bin/../lib/gcc/x86_64-redhat-linux/7/../../.. -L/usr/bin/../lib -L/lib -L/usr/lib -lstdc++ -lm -lgcc_s -lgcc -lc /usr/bin/../lib/gcc/x86_64-redhat-linux/7/crtend.o /usr/bin/../lib/gcc/x86_64-redhat-linux/7/../../../../lib64/crtn.o
