// ~ mohd uzaif ansair
#include <stdio.h>

int main() {
    int num, i;

    for (i = 1; i <= 5; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 3 == 0) {
            printf("%d is divisible by 3.\n", num);
        } else {
            printf("%d is not divisible by 3.\n", num);
        }
    }

    return 0;
}
