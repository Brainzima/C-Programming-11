// enter two numbers and display its sum 
#include <stdio.h>
int main(){
    
    for(int i=1; i<1000; i++){
        int num1 = 0;
        int num2 = 0;
        printf("Enter the value of num1:");
        scanf("%d",&num1);
        printf("Enter the value of num2:");
        scanf("%d",&num2);
        
        printf("Result: %d \n",num1+num2);
    }
    
    return 0;
}