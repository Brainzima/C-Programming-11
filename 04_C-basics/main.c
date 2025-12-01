#include<stdio.h>
int main(){
    int choise = 0;
    float l = 0;
    float b = 0;
    float r = 0;
    float aor = 0;
    float aoc = 0;
    float por = 0;
    float poc = 0;
    printf("************* Calculator ************\n");
    printf("************* Choose any one ************\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("Enter the choise number : ");
    scanf("%d",&choise);
    if(choise == 1){
        printf("Great! Your choise is Rectangle. So,\n");
        printf("Enter the value of Length: ");
        scanf("%f",&l);
        printf("Enter the value of Breadth: ");
        scanf("%f",&b);
        aor = l * b;
        por = 2 * (l + b);
        printf("******************************\n");
        printf("Area of Rectangle : %.2f \n",aor);
        printf("Perimeter of Rectangle : %.2f \n",por);
    }
    if(choise == 2){
        printf("Great! Your choise is Circle. So,\n");
        printf("Enter the value of Radius: ");
        scanf("%f",&r);
        aoc = 3.14 * r * r;
        poc = 2 * 3.14 * r;
        printf("******************************\n");
        printf("Area of Circle : %.2f \n",aoc);
        printf("Perimeter of Circle : %.2f \n",poc);
    }
    else{
        printf("Invalid Choise Please choose the valid option number.");
    }
}