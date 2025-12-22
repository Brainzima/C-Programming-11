/*
conditional statement
> if statement
    if(){
        statement
    }
    
> if else statement
    if(){
        statement
    }else{
        statement
    }
    
    
> nested if else statement
    if(){
        if(){
            statement
        }else{
            statement
        }
    }else{
        if(){
            statement
        }else{
            
        }
    }
> ladder if else statement
    If(){
        statement
    }else if(){
        statement
    }else if(){
        statement
    }else if(){
        statement
    }else{
        statement
    }
    
*/

// examples:
// nested 
/* write a program as below:
    item_name = 'Jeans' 
    qnty <= 5 , rate = 1000, want_discount = 5%
    qnty <= 10 , rate = 950, want_discount = 10%
    qnty <= 20 , rate = 900, want_discount = 15%
    qnty > 20 , rate = 850, want_discount = 20%
*/
#include <stdio.h>
int main(){
    int qnty=0;
    int rate=0;
    float amt=0;
    float total=0;
    float wd =0;
    float gd = 0;
    float damt = 0;
    printf("Enter the quantity: ");
    scanf("%d",&qnty);
    printf("Enter the discount you want (%): ");
    scanf("%f",&wd);
    if(qnty<=5){
        rate = 1000;
        if(wd <= 5){
            gd=wd;
        }else{
            gd=5;
        }
    }else if(qnty<=10){
        rate = 950;
        if(wd <= 10){
            gd=wd;
        }else{
            gd=10;
        }
    }else if(qnty<=20){
        rate = 900;
        if(wd <= 15){
            gd=wd;
        }else{
            gd=15;
        }
    }else{
        rate = 850;
        if(wd <= 20){
            gd=wd;
        }else{
            gd=20;
        }
    }
    
    
    total = qnty * rate;
    damt = total * gd / 100;
    amt = total - damt;
    printf("Quantity-%d \nWanted Discount-%.2f but Given Discount-%.2f% \nRate-%d \nTotal Amount-%.2f \nDiscounted Amount-%.2f \nNet Payble Amount - %.2f",qnty,wd,gd,rate,total,damt,amt);
    
}
    

