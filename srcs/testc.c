#include "header.h"

void testc(void)
{
    printf("------------ TEST [%%c] ------------\n"); // %c

    // Edge cases
    printf("expected : %c \n", 0);      // Null character
    ft_printf("     got : %c \n\n", 0);

    printf("expected : %c \n", 'A');    // Regular character
    ft_printf("     got : %c \n\n", 'A');

    printf("expected : %c \n", 'a');    // Lowercase character
    ft_printf("     got : %c \n\n", 'a');

    printf("expected : %c \n", '1');    // Numeric character
    ft_printf("     got : %c \n\n", '1');

    printf("expected : %c \n", ' ');    // Space character
    ft_printf("     got : %c \n\n", ' ');

    printf("expected : %c \n", '\n');    // Newline character
    ft_printf("     got : %c \n\n", '\n');

    printf("expected : %c \n", 255);     // Extended ASCII character
    ft_printf("     got : %c \n\n", 255);
}

int	main()
{
	testc();
	return (0);
}