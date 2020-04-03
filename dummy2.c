#include <stdio.h>

/* Test comment */

int main(){

    // puts("This is great");

    // printf("Hello \n world");

    // printf("Everyone knows that %d + %d = %d \n", 2, 2, 2 + 2);

    // printf("Good %s \n", "morning");

    // printf("You are a %c %s \n", 'C', "programmer");

    // int age;

    // age = 30;

    // printf("Current age is %d \n", age);

    int c;

    printf("Type a letter: ");

    c = getchar();

    printf("You typed '");
    putchar(c);
    printf("'\n");
    

    return(0);

}