#include <stdio.h>

int main()
{
    char ans; 
    int score = 0; 

    printf("\n1. What is C used for?\n");
    printf("A) System Programming (OS, Drivers)\n");
    printf("B) Game Development\n");
    printf("C) Only for making websites\n");
    printf("D) Both A and B\n");
    printf("Your Answer: ");
    scanf(" %c", &ans);
    if (ans == 'D' || ans == 'd') 
    {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct is D\n");
    }

    printf("\n2. What is the basic structure of a C program?\n");
    printf("A) Documentation, Link, Definition, Global Declaration, main(), Subprograms\n");
    printf("B) Only main() function\n");
    printf("C) <html> <head> <body>\n");
    printf("D) START and STOP\n");
    printf("your answer: ");
    scanf(" %c", &ans);
    if (ans == 'A' || ans == 'a') {
        printf("correct!\n"); 
        score++;
    } else {
        printf("wrong! correct is A\n");
    }

    printf("\n3. What does the main() function do in C?\n");
    printf("A) Execution of program starts from main()\n");
    printf("B) It is used for adding comments\n");
    printf("C) It is used to include header files\n");
    printf("D) It stops the computer\n");
    printf("Your Answer: "); 
    scanf(" %c", &ans);      
    if (ans == 'A' || ans == 'a') 
    {
        printf("correct!\n"); 
        score++;
    } else {
        printf("wrong! correct is A\n");
    }

    printf("\n----------------------\n");
    printf("TOTAL SCORE = %d / 3\n", score);

    return 0;
}