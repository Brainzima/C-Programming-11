// write a program to take a character from the user and display its ASCII Code.
// ASCII (American Standard Code for Information Interchange)

#include <stdio.h>

int main() {
    char userInput;
    printf("Enter your character:");
    scanf("%c", &userInput);
    printf("ASCII code of %c is %d.",userInput,userInput);
}