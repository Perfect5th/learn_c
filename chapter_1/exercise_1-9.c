#include <stdio.h>

/* copies input to output, replacing each string of one or more blanks with a
   single blank */
main()
{
    int c;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar(c);
            if ((c = getchar()) == ' ') {
                continue;
            }
            if (c != ' ') {
                putchar(c);
            }
            continue;
        }
        putchar(c);
    }
}
