SRC = main.c

all: library test

library:
	@../make
	@cp ../libftprintf.a .
	@cp ../ft_printf.h .

test:
	cc $(SRC) -L. -lftprintf -o testProg
	@./testProg

clean:
	@../fclean
	@rm -f testProg libftprintf.a ft_printf.h