#include "header.h"

void testi(void)
{
    printf("------------ TEST [%%i] ------------\n");

    printf("expected : %i \n", 2147483647);
    ft_printf("     got : %i \n\n", 2147483647);

    printf("expected : %i \n", -2147483648);
    ft_printf("     got : %i \n\n", -2147483648);

    printf("expected : %i \n", 0);
    ft_printf("     got : %i \n\n", 0);

    printf("expected : %i \n", 1);
    ft_printf("     got : %i \n\n", 1);

	printf("expected : %i \n", -1);
	ft_printf("     got : %i \n\n", -1);
}

int	main()
{
	testi();
	return (0);
}