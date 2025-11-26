// single line comment

/* multi line comment
line2 
line3
line4
*/

// program format
// header file include
    //#include <file.h>
// main function to execute
    /*
    datatype functionName(){
        statements.....
    }
    */

//#include <stdio.h>  //including the header for input and output
//int main(){
//    printf("Hello Aliens!");  //printf() function is used to display anything
//}



/*
datatype:
int -(%i or %d)- whole number related variables
float -(%f)- decimal/float number related variables 
double -(%lf)- double of any either int or float
char -(%c)- for any single letter either it is alphabets or it is symbol

What is Varibale?
=> A name to indicate any things. For example your name to call you.
    we often use variables to store any numbers, charcters, or anything.
    

Declaration of variable:
datatype variable_name = value;
ex:
int number = 789;
float price = 599.58;
double total = 4564545.45;
char grade = 'A';

Rules for Varibale Name:
=> Name can not be starts with numbers
=> Name can contains numbers
=> Name should not have any white-space 
=> Name can be declared in camelCase
=> Name can be declared with underscore
=> Name can be starts from underscore
=> Name is case sensitive

*/

// Write a program to declare two numbers and display its sum.
#include <stdio.h>
int main(){
    int num1 = 500;
    int num2 = 400;
    int sum = num1 + num2;
    printf("Number1 : %d \n",num1);  
    printf("Number2 : %d \n",num2);  
    printf("Sum of both numbers: %d",sum);
}

// printf("strings placeholder",mention vars of placeholder);
// ( \ ) - back slash / escape operator 
// ( \n ) - escape operator for new line 































