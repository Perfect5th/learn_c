#include <stdio.h>

/* prints histogram of the lengths of input words */
main()
{
    int c, i, j, length;
    int lengths[20];
    
    length = -1;
    for (i = 0; i < 20; ++i)
        lengths[i] = 0;
    
    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\n' || c == '\t') {
            ++lengths[length];
            length = -1;
        }
        else {
            ++length;
        }
    
    for (i = 0; i < 20; ++i) {
        printf("%d:\t", i + 1);
        for (j = 0; j < lengths[i]; ++j)
            putchar('X');
        putchar('\n');
    }
}
