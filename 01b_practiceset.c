// using inputs supplied by the user ~ mohd-uzaif-ansari
#include <stdio.h>

int main()
{
    // calculating area of rectangle
    int length, breadth, area;
    printf("Enter length : ");
    scanf("%d", &length);
    printf("Enter Breadth : ");
    scanf("%d", &breadth);

    area = length * breadth;
    printf("Area of Rectangle is : %d", area);
    return 0;
}