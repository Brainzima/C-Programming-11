// to take input from the user, we use scanf()
// scanf("%d",&num)

// #include<stdio.h>
// int main(){
//     int num = 10;
//     printf("%d", num);
//     printf("%d", &num);
// }

// write a program to take length and breadth of a reactangle and display its area
// #include<stdio.h>
// int main(){
//     int b = 0;
//     int l = 0;
//     int area = 0;
//     printf("********* Area of reactangle calculator **********\n");
//     printf("Enter the value of breadth:");
//     scanf("%d", &b);
//     printf("Enter the value of length:");
//     scanf("%d", &l);
//     area = l * b;
//     printf("**************************************************\n");
//     printf("Area of Reactangle : %d",area);
// }

// write a program to take radius of a circle and display its area, perimeter
#include <stdio.h>
int main(){
    float r = 0;
    float area = 0;
    float perimeter = 0;
    printf("Enter the value of radius: ");
    scanf("%f",&r);
    area = 3.14 * r * r;    // * -  asterisk
    perimeter = 2 * 3.14 * r;
    printf("Area of Circle: %.2f \n",area);
    printf("Perimeter of Circle: %.2f",perimeter);
}






