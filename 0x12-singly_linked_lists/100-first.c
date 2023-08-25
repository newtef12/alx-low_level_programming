#include <stdio.h>

void execute_before_main(void) __attribute__ ((constructor));

/**
 * execute_before_main - Prints a message before the main function is executed.
 */
void execute_before_main(void)
{
    printf("You're here early! But let me tell you,\n");
    printf("I carry my home on my back!\n");
}
