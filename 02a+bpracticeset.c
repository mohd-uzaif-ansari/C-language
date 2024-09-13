// ~ mohd-uzaif-ansari
#include <stdio.h>
int main()
{
    // calculating volume of cylinder
    float radius, height, volume, area, pi = 3.14159;
    printf("Enter the Height : ");
    scanf("%f", &height);
    printf("Enter the radius : ");
    scanf("%f", &radius);
    volume = radius * radius * height * pi;
    area = pi * radius * radius;
    printf("Volume of cylinder is : %.3f\n", volume);
    printf("Area of circe is : %.3f", area);

    return 0;
}