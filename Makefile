I = -I includes/

all: library m d i u c s p x X

m: library
	@cc srcs/mandatory_header.c -L. -lftprintf -o Prog $(I)
	@./Prog
	@rm -f Prog

d: library
	@cc srcs/testd.c -L. -lftprintf -o prog $(I)
	@./prog
	@rm -f Prog

i: library
	@cc srcs/testi.c -L. -lftprintf -o prog $(I)
	@./prog
	@rm -f Prog

u: library
	@cc srcs/testu.c -L. -lftprintf -o prog $(I)
	@./prog
	@rm -f Prog

c: library
	@cc srcs/testc.c -L. -lftprintf -o prog $(I)
	@./prog
	@rm -f Prog

s: library
	@cc srcs/tests.c -L. -lftprintf -o prog $(I)
	@./prog
	@rm -f Prog

p: library
	@cc srcs/testp.c -L. -lftprintf -o prog $(I)
	@./prog
	@rm -f Prog

x: library
	@cc srcs/testx.c -L. -lftprintf -o prog $(I)
	@./prog
	@rm -f Prog

X: library
	@cc srcs/testCX.c -L. -lftprintf -o prog $(I)
	@./prog
	@rm -f Prog

return: library
	@cc srcs/testret.c -L. -lftprintf -o prog $(I)
	@./prog
	@rm -f Prog

library: clean
	cd ../ && make
	cp ../libftprintf.a .
	cp ../ft_printf.h ./includes

clean:
	rm -f testProg libftprintf.a includes/ft_printf.h
	cd ../ && make fclean