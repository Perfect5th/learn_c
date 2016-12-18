#include <stdio.h>

/* print Celsius-Farenheit table
    for celsius = 0, 20, ..., 300 */
main()
{
    float celsius, fahr;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    printf("%3c\t%6c\n", 'C', 'F');
    
    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
