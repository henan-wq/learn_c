#include <stdio.h>



main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf(" %3d %6d\n", fahr, celsius);  /* fahr的值占3个数字宽，celsius的值占6个数字宽 */
        fahr = fahr + step;
    }
}
