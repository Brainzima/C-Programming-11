// write a program to take a number from the user from 1 to 7 and display the Day of the week
#include <stdio.h>
int main(){
    int day = 0;
    printf("Enter the day number: ");
    scanf("%d",&day);
    if(day == 1){
        printf("Day 1 is Monday.");
    }else if(day == 2){
        printf("Day 2 is Tuesday.");
    }else if(day == 3){
        printf("Day 3 is Wedenesday.");
    }else if(day == 4){
        printf("Day 4 is Thursday.");
    }else if(day == 5){
        printf("Day 5 is Friday.");
    }else if(day == 6){
        printf("Day 6 is Saturday.");
    }else if(day == 7){
        printf("Day 7 is Sunday.");
    }else{
        printf("Invalid day number. Please enter between 1 to 7.");
    }
}
