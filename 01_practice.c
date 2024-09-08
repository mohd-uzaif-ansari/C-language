// ~ mohd-uzaif-ansari

/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    printf("Enter marks1 : ");
    scanf("%d", &marks1);
    printf("Enter marks2 : ");
    scanf("%d", &marks2);
    printf("Enter marks3 : ");
    scanf("%d", &marks3);
    printf("The entered marks is %d %d %d \n", marks1, marks2, marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33){
        printf("Sad ! You have failed due to less marks in individual subject\n");
    }
    else if((marks1+marks2+marks3)/3 <40 ){
        printf("you have failed due to less percentage\n");
    }
    else{
        printf("congratulation! You have passed the exam ");
    }
        return 0;
}