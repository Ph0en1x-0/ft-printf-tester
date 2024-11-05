#include "header.h"

void testp(void)
{
    int a = 42;
    int *ptr = &a;
    int *null_ptr = NULL;

    printf("------------ TEST [%%p] ------------\n");      // %p

    // Basic pointer test
    printf("expected : %p \n", ptr);
    ft_printf("     got : %p \n\n", ptr);

    // NULL pointer test
    printf("expected : %p \n", null_ptr);
    ft_printf("     got : %p \n\n", null_ptr);

    // Test with different addresses
    int b = 100;
    printf("expected : %p \n", &b);
    ft_printf("     got : %p \n\n", &b);

    char c = 'A';
    printf("expected : %p \n", &c);
    ft_printf("     got : %p \n\n", &c);

    double d = 3.14;
    printf("expected : %p \n", &d);
    ft_printf("     got : %p \n\n", &d);

    // Large address test (simulated)
    void *large_addr = (void *)0xFFFFFFFFFFFF;
    printf("expected : %p \n", large_addr);
    ft_printf("     got : %p \n\n", large_addr);
}

int	main()
{
	testp();
	return (0);
}