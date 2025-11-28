// conditional statement

/* 
if(condition){
    statement... if condition true 
}else{
    statement... if condition false 
}
*/

// Write a program to take age from the user and display user is adult or not
// #include <stdio.h>
// int main(){
//     int age = 0;
//     printf("Enter your age:");
//     scanf("%d",&age);
//     if(age >= 18){
//         printf("You are Adult.");
//     }else{
//         printf("You are Minor.");
//     }
// }


// Write a program to take a number from the user and display either it is even or odd
#include <stdio.h>
int main(){
    int number = 0;
    printf("Enter your number:");
    scanf("%d",&number);
    if(number % 2 == 0){
        printf("Number is Even.");
    }else{
        printf("Number id Odd.");
    }
}

