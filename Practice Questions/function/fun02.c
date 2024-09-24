#include <stdio.h>

// Function prototype
int add(int, int);





int main() {
    int result;
    result = add(5, 10);  // Calling the function
    printf("The sum is: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}