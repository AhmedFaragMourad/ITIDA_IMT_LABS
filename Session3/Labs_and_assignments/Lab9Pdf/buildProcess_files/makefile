#@ Copyright : Ahmed Farag

all: CompleteMake.hex
	@echo "Build Is Done"

PreProcessor:
	gcc -E main.c -o main.i
	

compile: PreProcessor
	gcc -c main.c  -o main.s
	
Assemb: Compile
	gcc -c main.c -o main.obj
	
Linker: Assemb
	gcc -o CompleteLink.exe main.obj 
CompleteMake.hex:  Linker
	
clean_all:
	rm *.elf *.s *.obj *.o *.i *.exe *.hex