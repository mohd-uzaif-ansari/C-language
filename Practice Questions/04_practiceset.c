// ~ mohd-uzaif-ansari
#include <stdio.h>

int main()
{
    int si, p, r, t;
    printf("Enter pricipal amount : ");
    scanf("%d", &p);
    printf("Enter rate of interest : ");
    scanf("%d", &r);
    printf("Enter time : ");
    scanf("%d", &t);
    si = (p*r*t)/100;
    printf("The Simple interest is %d", si);
    return 0;
}