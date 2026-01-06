/*
Array:
    to store multiple values in one variable.
declaring indexed Array:
datatype var_name[] = {multiple values with comma seperated};
ex:
int nums[] = {10, 52, 45, 78, 89, 45, 64, 75};

[] = unlimited data 
[10] = limit to 10

One Dimensional Array.

index number : default index number starts from 0 in Array. 

Accessing the Data with index number:
var_name[index]


*/

// #include <stdio.h>
// int main(){
//     int nums[] = {10,20,30,40,50,60};
//     printf("%d \n",nums[0]);
//     printf("%d \n",nums[1]);
//     printf("%d \n",nums[2]);
//     printf("%d \n",nums[3]);
//     printf("%d \n",nums[4]);
//     printf("%d \n",nums[5]);
// }


// #include <stdio.h>
// int main(){
//     int nums[] = {10,20,30,40,50,60};
//     for(int i=0; i<6; i++){
//         printf("%d \n",nums[i]);
//     }
// }


// real world example program: write a program to ask user how many numbers wants to add then display its sum without Array.

#include <stdio.h>
int main(){
    int num=0;
    int sum=0;
    int loop=0;
    printf("How many numbers you want to add: ");
    scanf("%d",&loop);
    for(int i=1; i<=loop; i++){
        printf("Enter the value of number-%d: ",i);
        scanf("%d",&num);
        // sum = sum + num;
        sum += num;
    }
    printf("Sum of All numbers: %d",sum);
    
}





