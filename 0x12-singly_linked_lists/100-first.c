#include <stdio.h>

void before_main(void) __attribute__ ((constructor));

/**
 * before_main - Prints a message before the main function is executed.
 */
void before_main(void)
{
    printf("You're conquered! and still, you must acknowledge,\n");
    printf("I carry my dwelling on my dorsal ridge!\n");
}
