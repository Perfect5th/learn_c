#include <stdio.h>

/* Prints input one word per line */
main()
{
    int c;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            putchar('\n');
        } else {
            putchar(c);
        }
    }
}
