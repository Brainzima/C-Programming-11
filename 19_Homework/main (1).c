// user will enter a number and also the power value
#include <stdio.h>
int main(){
    int num, power, result=1;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the value of power:");
    scanf("%d",&power);
    for(int i=1; i<=power; i++){
        // printf("%d \n", num*num);          #glt
        
        result = result * num;             // sahi formula
        // printf("%d \n", result);        // print glt h isko block ke bahar print    
        
    }
    printf("Result: %d",result);
}



/*
 ----------HOMEWORK-------------
 1. Switch case se simple calculator banaiye (add, sub, mul, div) jaise aapne pehle float wala kiya tha.
 2. Maximum aur minimum do numbers ka function banaiye, return type int.
 3. Swap two numbers without temp variable using function.



*/