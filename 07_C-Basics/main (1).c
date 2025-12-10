/*  

switch(app){
    case 'bulb':
    statement....;
    break;
    case 'fan':
    statement...;
    break;
    case 'batti':
    statement...;
    break;
    deafult:
    statement...;
    break;
}

*/


#include <stdio.h>

int main(){
   int day = 0;
   printf("Enter the number of day:");
   scanf("%d",&day);
   
   switch(day){
       case 1:
       printf("Day 1 is Monday.");
       break;
       case 2:
       printf("Day 2 is Tuesday.");
       break;
       case 3:
       printf("Day 3 is Wedenesday.");
       break;
       case 4:
       printf("Day 4 is Thursday.");
       break;
       case 5:
       printf("Day 5 is Friday.");
       break;
       case 6:
       printf("Day 6 is Saturday.");
       break;
       case 7:
       printf("Day 7 is Sunday.");
       break;
       default:
       printf("Invalid day number. Please enter the valid one between 1-7.");
       break;
   }
}










