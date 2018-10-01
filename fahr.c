#include <stdio.h>
/*print Fahrenheit-Celsius table */
int main(void)
{
    int fahr;
    fahr = -100;
    while (fahr <=300)
    {
        fahr = fahr +20;
        printf ("f - %3d c - %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}