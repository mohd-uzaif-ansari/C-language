#include <stdio.h>

// function prototype
void good_morning();
void gooo_afternoon();
void good_evening();

// Function body
void good_morning()
{
    printf("Hi good morning\n");
}
void good_afternoon()
{
    printf("Hi good afternoon\n");
}
void good_evening()
{
    printf("Hi good evening\n");
}

int main()
{
good_morning();
good_evening();
good_afternoon();
    return 0;
}