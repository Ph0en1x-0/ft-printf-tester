#include "header.h"

void print_mandatory_header(void)
{
    printf("\033[0;35m"); // Set color to purple
    printf("╔══════════════════════════════════╗\n");
    printf("║            ★ PHOENIX ★           ║\n");
    printf("╚══════════════════════════════════╝\n");
    printf("\033[0m"); // Reset color
}

int main()
{
	print_mandatory_header();
	return (0);
}