#include "header.h"

void testu(void)
{
    printf("------------ TEST [%%u] ------------\n");      // %u

    // Basic cases
    printf("expected : %u \n", 0);
    ft_printf("     got : %u \n\n", 0);

    printf("expected : %u \n", 1);
    ft_printf("     got : %u \n\n", 1);

    printf("expected : %u \n", 4294967295U);  // Maximum value for unsigned int
    ft_printf("     got : %u \n\n", 4294967295U);

    // Medium-sized values
    printf("expected : %u \n", 12345);
    ft_printf("     got : %u \n\n", 12345);

    printf("expected : %u \n", 987654321);
    ft_printf("     got : %u \n\n", 987654321);

    // Tests with width and padding
    printf("expected : %u \n", 429496729);  // Large number test
    ft_printf("     got : %u \n\n", 429496729);
}

int	main()
{
	testu();
	return (0);
}