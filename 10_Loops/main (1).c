// Loops 
/*
there are three types:
1. for-loop 
2. while loop
3. do-while loop 
*/
// aaj for-loop dekhenge
/* 
syntax:
int i=1;
for(initialization; condition; increment/decrement){
    statement....
}
*/

// print hello aliens 10times

//problem
// #include <stdio.h>
// int main(){
//     printf("Hello Aliens.\n");
//     printf("Hello Aliens.\n");
//     printf("Hello Aliens.\n");
//     printf("Hello Aliens.\n");
//     printf("Hello Aliens.\n");
//     printf("Hello Aliens.\n");
//     printf("Hello Aliens.\n");
//     printf("Hello Aliens.\n");
//     printf("Hello Aliens.\n");
//     printf("Hello Aliens.\n");
// }

// solution
// #include <stdio.h>
// int main(){
//     int i=1;
//     for(i; i<=100; i++){
//         printf("Hello Aliens. \n");
//     }
// }



////
// #include <stdio.h>
// int main(){
//     int i=1;
//     for(i; i<=1000; i++){
//         printf("%d ,",i);
//     }
// }

////
// #include <stdio.h>
// int main(){
//     int i=100;
//     for(i; i>=1; i--){
//         printf("%d ,",i);
//     }
// }


// Write a program to take a number from the user and display its table.
#include <stdio.h>
int main(){
    int i=1;
    int number = 0;
    printf("**************Get Table of Any Number*****************\n");
    printf("Enter the Number: ");
    scanf("%d",&number);
    
    // printf("%d \n",number*1);
    // printf("%d \n",number*2);
    // printf("%d \n",number*3);
    // printf("%d \n",number*4);
    // printf("%d \n",number*5);
    // printf("%d \n",number*6);
    // printf("%d \n",number*7);
    // printf("%d \n",number*8);
    // printf("%d \n",number*9);
    // printf("%d \n",number*10);
    
    for(i; i<=10; i++){
        printf("%d x %d = %d \n",number, i, number*i);
    }
}





















