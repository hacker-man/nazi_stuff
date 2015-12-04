OBJ=./obj
SRC=./src
CFLAGS=-Wall -pedantic -Wpedantic -ansi
LFLAGS=-L./lib/Linux/x86_64

all: minishell.elf

clean: sclean
	rm -f minishell.elf

sclean:
	rm -f $(OBJ)/*.o

.PHONY: all clean sclean

minishell.elf: $(OBJ)/minishell.o $(OBJ)/free_args.o $(OBJ)/minishell_input.o
	gcc $(CFLAGS) $(LFLAGS) -o $@ $^ -lshell

$(OBJ)/%.o: $(SRC)/%.c
	gcc $(CFLAGS) -c -o $@ $<
