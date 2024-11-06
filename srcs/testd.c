#include "header.h"

void testd(void)
{
    printf("------------ TEST [%%d] ------------\n");

    printf("expected : %d \n", 2147483647);
    ft_printf("     got : %d \n\n", 2147483647);

    printf("expected : %d \n", -2147483648);
    ft_printf("     got : %d \n\n", -2147483648);

    printf("expected : %d \n", 0);
    ft_printf("     got : %d \n\n", 0);

    printf("expected : %d \n", 123);
    ft_printf("     got : %d \n\n", 123);

	printf("expected : %d \n", -123);
	ft_printf("     got : %d \n\n", -123);
}

int	main()
{
 	testd();
	return (0);
}