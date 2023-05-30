ifeq ($(OS), Windows_NT)
	EXECUTABLE=enigma.exe
else
	EXECUTABLE=enigma.out
endif

$(EXECUTABLE): main.c
	gcc -I. *.c -o $(EXECUTABLE)
db:
	gcc -g main.c -I. -o $(EXECUTABLE)
clean:
	rm -fr $(EXECUTABLE)