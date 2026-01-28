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
    
    int num1, num2;
    char op;
    printf("Enter operator ( + - x / ):");
    scanf("%c",&op);
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);
    calculate(num1,num2,op);
    
}