#include "header.h"

void testd(void)
{
    printf("------------ TEST [%%d] ------------\n");

    printf("expected : %d \n", 2147483647);
    ft_printf("     got : %d \n\n", 2147483647);

//    printf("expected : %d \n", -2147483648);
//    ft_printf("     got : %d \n\n", -2147483648);

    printf("expected : %d \n", 0);
    ft_printf("     got : %d \n\n", 0);

    printf("expected : %d \n", 1);
    ft_printf("     got : %d \n\n", 1);

	printf("expected : %d \n", -1);
	ft_printf("     got : %d \n\n", -1);
}

int	main()
{
 	testd();
	return (0);
}