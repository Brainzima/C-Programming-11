/*

problem:

num1 = 4545;
num2 = 45456;

sum = num1 + num2
sub = num1 - num2
mul = num1 * num2
div = num1 / num2
r = num1 % num2

Solution:
Function

calculate(num1, num2, op){
    switch(op){
        case '+':
            result = num1 + num2;
            break;
        
    }
}

calculate(num1, num2, op);


declaration of function:
function(params){
    
}

calling of function:
function(args);









*/


// #include <stdio.h>
// void greet(){
//     printf("Hello Aliens.");
// }

// void main(){
//     greet();
// }


// #include <stdio.h>
// int show(int num){
//     printf("Hello %d.",num);
// }

// int main(){
//     // show(50);
    
// }

#include<stdio.h>
int calculate(int num1, int num2, char op){
    switch(op){
        case '+':
            printf("%d",num1+num2);
            break;
        case '-':
            printf("%d",num1-num2);
            break;
        case 'x':
            printf("%d",num1*num2);
            break;
        case '/':
            printf("%d",num1/num2);
            break;
        default:
            printf("Invalid operator. Please enter valid operator( + - x / ).");
    }
}

int main(){
    // calculate(20,30,'+');
    // calculate(25,30,'-');
    // calculate(25,30,'%');
    // calculate(25,30,'x');
    
    int num1, num2;
    char op;
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);
    printf("Enter operator ( + - x / ):");
    scanf("%c",&op);
    // calculate(num1,num2,op);
    
}




















