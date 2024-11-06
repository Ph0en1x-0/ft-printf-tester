#include "header.h"

void testx(void)
{
    printf("------------ TEST [%%x] ------------\n");      // %x

    // Edge cases
    printf("expected : %x \n", 0);
    ft_printf("     got : %x \n\n", 0);

    printf("expected : %x \n", 1);
    ft_printf("     got : %x \n\n", 1);

    printf("expected : %x \n", 15);
    ft_printf("     got : %x \n\n", 15);

    printf("expected : %x \n", 255);
    ft_printf("     got : %x \n\n", 255);

    printf("expected : %x \n", 2147483647);
    ft_printf("     got : %x \n\n", 2147483647);

    printf("expected : %x \n", -1);
    ft_printf("     got : %x \n\n", -1);

	printf("expected : %x \n", -1232);
    ft_printf("     got : %x \n\n", -1232);
}

int	main()
{
	testx();
	return (0);
}