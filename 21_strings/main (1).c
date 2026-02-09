/* 
Strings: A combination of characters.

declaration: using single quotes ('strings') or double quotes ("strings")

> strings are basically array in c.

char name[] = "Brainzima";

char name[] = {'B','r','a','i','n','z','i','m','a'};

char datatype specifier %c but for string we use %s
*/

#include<stdio.h>
int main(){
    char name[] = "Brainzima";
    // printf("%c",name[5]);
    // for(int i=0;i<=8;i++){
    //     printf("%c",name[i]);
    // }
    
    printf("%s", name);
    
    printf("\n Enter something:");
    scanf("%s",&name);
    printf("%s", name);
}




//task: write a program to make a simple billing system. take the item name, price, quatity and display the bill with total bill.


