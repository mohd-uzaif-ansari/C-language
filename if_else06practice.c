// ~ mohd uzaif ansari 
#include <stdio.h>

int main() {
    int age;
    char nationality[20];

    // Input age and nationality
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your nationality: ");
    scanf("%s", nationality);

    // Outer if-else for age condition
    if (age >= 18) {
        // Nested if-else for nationality
        if (strcmp(nationality, "Indian") == 0) {
            printf("You are eligible to vote.\n");
        } else {
            printf("You must be an Indian citizen to vote.\n");
        }
    } else {
        printf("You are not eligible to vote, as you are under 18.\n");
    }

    return 0;
}
// strcmp() is used to compare strings (nationality input).
