#include <stdio.h>

float fahr(int f);

/* same as fahr.c, but using a discrete function for conversion */
main()
{
    float fahren, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    printf("%3c\t%6c\n", 'F', 'C');
    
    fahren = lower;
    while (fahren <= upper) {
        celsius = fahr(fahren);
        printf("%3.0f\t%6.1f\n", fahren, celsius);
        fahren = fahren + step;
    }
}

/* fahr: convert fahrenheit value to celsius */
float fahr(int fahren)
{
    float celsius;
    
    celsius = (5.0/9.0) * (fahren-32.0);
    return celsius;
}
