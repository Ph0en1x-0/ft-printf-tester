#include "header.h"

static void testiret()
{
	printf("\n\n***[TEST INT]***\n\n"); // Test with integers
    printf("expected : %d", printf("%d\n", 42));
    printf("     got : %d", ft_printf("%d\n", 42));
    printf("\n\n");

	printf("expected : %d", printf("%d\n", -42));
    printf("     got : %d", ft_printf("%d\n", -42));
    printf("\n\n");

	printf("expected : %d", printf("%d\n", 0));
    printf("     got : %d", ft_printf("%d\n", 0));
    printf("\n\n");

	printf("expected : %d", printf("%d\n", -2147483648));
    printf("     got : %d", ft_printf("%d\n", -2147483648));
    printf("\n\n");
}

static void testpret()
{
	// Test with a valid pointer
    void *ptr1 = (void *)0x1234ABCD;  // Sample pointer value

    // Test with NULL pointer
    void *ptr2 = NULL;

    // Test with a large pointer address
    void *ptr3 = (void *)0x7FFFFFFF00000000;  // A very large pointer value (64-bit)

    // Test with %p (pointer)
    printf("\n\n***[TEST %%p]***\n\n");

    // Test with a valid pointer
    printf("expected : %d", printf("%p\"\n", ptr1));  // Should print 0x1234abcd
    printf("     got : %d", ft_printf("%p\"\n", ptr1));  // Should match printf's result
    printf("\n\n");

    // Test with a NULL pointer
    printf("expected : %d", printf("%p\"\n", ptr2));  // Should print (nil)
    printf("     got : %d", ft_printf("%p\"\n", ptr2));  // Should match printf's result
    printf("\n\n");

    // Test with a large pointer value
    printf("expected : %d", printf("%p\"\n", ptr3));  // Should print a large memory address
    printf("     got : %d", ft_printf("%p\"\n", ptr3));  // Should match printf's result
    printf("\n\n");

    // Test with another valid pointer
    void *ptr4 = (void *)0x00000001;  // Edge case with a small pointer address
    printf("expected : %d", printf("%p\"\n", ptr4));  // Should print 0x1
    printf("     got : %d", ft_printf("%p\"\n", ptr4));  // Should match printf's result
    printf("\n\n");

    // Test with a pointer with value 0 (should print (nil) in both printf and ft_printf)
    void *ptr5 = (void *)0;
    printf("expected : %d", printf("%p\"\n", ptr5));  // Should print (nil)
    printf("     got : %d", ft_printf("%p\"\n", ptr5));  // Should match printf's result
    printf("\n\n");
}

static void testcret()
{
	printf("***[TEST CHAR]***\n\n"); // Test with a single character
    printf("expected : %d", printf("%c\"\n", 'A'));
    printf("     got : %d", ft_printf("%c\"\n", 'A'));
    printf("\n\n");
}

static void testsret()
{
	printf("\n\n***[TEST STR]***\n\n");// Test with a simple string
    printf("expected : %d", printf("%s\"\n", "Hello, world!"));
    printf("     got : %d", ft_printf("%s\"\n", "Hello, world!"));
    printf("\n\n");

	printf("expected : %d", printf("%s\"\n", ""));
    printf("     got : %d", ft_printf("%s\"\n", ""));
    printf("\n\n");

}

static void testuret()
{
	printf("\n\n***[TEST UNSIGNED]***\n\n"); // Test with unsigned values
    printf("expected : %d", printf("%u\n", 4294967295));
    printf("     got : %d", ft_printf("%u\n", 4294967295)); 
    printf("\n\n");

    printf("expected : %d", printf("%u\n", 0)); 
    printf("     got : %d", ft_printf("%u\n", 0));
    printf("\n\n");

    printf("expected : %d", printf("%u\n", 123456789));
    printf("     got : %d", ft_printf("%u\n", 123456789));
    printf("\n\n");

    printf("expected : %d", printf("%u\n", 1)); 
    printf("     got : %d", ft_printf("%u\n", 1));  
    printf("\n\n");

    printf("expected : %d", printf("%u\n", 2147483648));
    printf("     got : %d", ft_printf("%u\n", 2147483648));
    printf("\n\n");
}

static void testhret()
{
	printf("\n\n***[TEST HEX]***\n\n"); // Test with hexadecimal numbers
    printf("expected : %d", printf("0x%x, 0x%X\"\n", 255, 255));
    printf("     got : %d", ft_printf("0x%x, 0x%X\"\n", 255, 255));
    printf("\n\n");
}

static void testotherret()
{
	printf("\n\n***[TEST ASCII]***\n\n"); // Test with a string and extended ASCII character
    printf("expected : %d", printf("%s %c\"\n", "Test", (char) 0xA9));  // © symbol
    printf("     got : %d", ft_printf("%s %c\"\n", "Test", (char) 0xA9));
    printf("\n\n");

    

    printf("\n\n***[TEST %%]***\n\n"); // Test with percentage sign
    printf("expected : %d", printf("%%\"\n"));
    printf("     got : %d", ft_printf("%%\"\n"));
    printf("\n\n");

    // Test with multiple types
    printf("expected : %d", printf("%s %d %x\"\n", "Mix", 123, 0xAB));
    printf("     got : %d", ft_printf("%s %d %x\"\n", "Mix", 123, 0xAB));
    printf("\n\n");
}

void	ft_testret(void)
{
	printf("------------ TEST [RETURN] ------------\n");
	testiret();
	testpret();
	testcret();
	testsret();
	testuret();
	testhret();
	testotherret();
}

int main()
{
	ft_testret();
	return (0);
}