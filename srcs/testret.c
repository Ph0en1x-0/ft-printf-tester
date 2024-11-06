#include "header.h"


void	ft_testret(void)
{
	printf("------------ TEST [RETURN] ------------\n");
    // Test with a simple string
    printf("expected : %d", printf("%s\"\n", "Hello, world!"));
    printf("     got : %d", ft_printf("%s\"\n", "Hello, world!"));
    printf("\n\n");

    // Test with integers
    printf("expected : %d", printf("%d, %d, %d\"\n", 42, -42, 0));
    printf("     got : %d", ft_printf("%d, %d, %d\"\n", 42, -42, 0));
    printf("\n\n");

    // Test with a string and extended ASCII character
    printf("expected : %d", printf("%s %c\"\n", "Test", (char) 0xA9));  // © symbol
    printf("     got : %d", ft_printf("%s %c\"\n", "Test", (char) 0xA9));
    printf("\n\n");

    // Test with hexadecimal numbers
    printf("expected : %d", printf("0x%x, 0x%X\"\n", 255, 255));
    printf("     got : %d", ft_printf("0x%x, 0x%X\"\n", 255, 255));
    printf("\n\n");

    // Test with empty string
    printf("expected : %d", printf("%s\"\n", ""));
    printf("     got : %d", ft_printf("%s\"\n", ""));
    printf("\n\n");

    // Test with percentage sign
    printf("expected : %d", printf("%%\"\n"));
    printf("     got : %d", ft_printf("%%\"\n"));
    printf("\n\n");

    // Test with a single character
    printf("expected : %d", printf("%c\"\n", 'A'));
    printf("     got : %d", ft_printf("%c\"\n", 'A'));
    printf("\n\n");

    // Test with multiple types
    printf("expected : %d", printf("%s %d %x\"\n", "Mix", 123, 0xAB));
    printf("     got : %d", ft_printf("%s %d %x\"\n", "Mix", 123, 0xAB));
    printf("\n\n");

}

int main()
{
	ft_testret();
	return (0);
}