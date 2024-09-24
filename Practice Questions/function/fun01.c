#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}




int main() {
    int result;
    result = add(5, 10);  // Calling the function
    printf("The sum is: %d\n", result);
    return 0;
}
