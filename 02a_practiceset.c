// ~ mohd-uzaif-ansari
#include <stdio.h>

int main()
{
    // calculating area of circle
    float radius, area, pi = 3.14159;
    printf("Enter the radius : ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("Area of circe is : %.3f", area);
    return 0;
}