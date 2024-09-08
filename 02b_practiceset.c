// ~ mohd-uzaif-ansari
#include <stdio.h>

int main()
{
    // calculating volume of cylinder
    float radius, height, volume, pi = 3.14159;
    printf("Enter the Height : ");
    scanf("%f", &height);
    printf("Enter the radius : ");
    scanf("%f", &radius);
    volume = radius * radius * height * pi;
    printf("Volume of cylinder is : %.3f", volume);
    return 0;
}