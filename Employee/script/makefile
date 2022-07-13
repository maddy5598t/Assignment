CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: Emp

Emp: $(OBJ)/Emp.o
     $(CC) $(LFLAGS) $(BIN)/Emp $(OBJ)/Emp.o

$(OBJ)/Emp.o: $(SRC)/Emp.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/Emp.cpp
	mv *.o $(OBJ)

clean:
	@echo "Cleaning is in Progress"
	rm -f a.out Emp
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/Emp
	@echo "Done!

