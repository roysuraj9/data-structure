OBJ:=$(patsubst %.c,%.o,$(wildcard *.c))
output1.exe : $(OBJ)
	gcc -o $@ $^
clean:
	rm *.exe *.o
