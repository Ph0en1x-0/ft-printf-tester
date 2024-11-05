#include "header.h"

void tests(void)
{
    printf("------------ TEST [%%s] ------------\n");      // %s

    // Basic cases
    printf("expected : %s \n", "Hello, world!");
    ft_printf("     got : %s \n\n", "Hello, world!");

    printf("expected : %s \n", "");
    ft_printf("     got : %s \n\n", "");

    printf("expected : %s \n", "42");
    ft_printf("     got : %s \n\n", "42");

    // Edge cases with NULL
//    printf("expected : %s \n", (char *)NULL);
//    ft_printf("     got : %s \n\n", (char *)NULL);
}

int	main()
{
	tests();
	return (0);
}