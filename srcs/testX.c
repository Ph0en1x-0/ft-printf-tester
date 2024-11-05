#include "header.h"

void testX(void)
{
    printf("------------ TEST [%%X] ------------\n");      // %x

    // Edge cases
    printf("expected : %X \n", 0);
    ft_printf("     got : %X \n\n", 0);

    printf("expected : %X \n", 1);
    ft_printf("     got : %X \n\n", 1);

    printf("expected : %X \n", 15);
    ft_printf("     got : %X \n\n", 15);

    printf("expected : %X \n", 255);
    ft_printf("     got : %X \n\n", 255);

    printf("expected : %X \n", 2147483647);
    ft_printf("     got : %X \n\n", 2147483647);

    printf("expected : %X \n", -1);
    ft_printf("     got : %X \n\n", -1);
}

int	main()
{
	testX();
	return (0);
}