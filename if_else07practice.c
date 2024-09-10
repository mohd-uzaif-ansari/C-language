// ~ mohd uzaif ansari

#include <stdio.h>

int main()
{
    int num;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is a positive number.\n", num);

        if (num % 2 == 0)
        {
            printf("%d is an even number.\n", num);
        }
        else
        {
            printf("%d is an odd number.\n", num);
        }
    }
    else if (num < 0)
    {
        printf("%d is a negative number.\n", num);

        if (num % 2 == 0)
        {
            printf("%d is an even number.\n", num);
        }
        else
        {
            printf("%d is an odd number.\n", num);
        }
    }
    else
    {
        printf("The number is zero.\n");
    }

    return 0;
}
