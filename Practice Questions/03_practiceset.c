// ~ mohd-uzaif-ansari
#include <stdio.h>
int main()
{
    // Converting celcius to fahrenheit
    float celsius, fahrenheit;
    printf("Enter temperature in fahrenheit :");
    scanf("%f", &celsius);
    fahrenheit = (9.0 / 5.0) * celsius + 32;
    printf("Temperature in Fahrenheit is : %.3f", fahrenheit);
    return 0;
}