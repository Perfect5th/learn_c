#include <stdio.h>

/* Replaces each tab, backspace, and backslash with their escape-sequence
   characters */
main()
{
    int c;
    
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
            continue;
        }
        if (c == '\b') {
            putchar('\\');
            putchar('b');
            continue;
        }
        if (c == '\\') {
            putchar('\\');
            putchar('\\');
            continue;
        }
        putchar(c);
    }
}
