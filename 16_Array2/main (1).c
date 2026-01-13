// real world example program: write a program to ask user how many numbers wants to add then display its sum without Array.

// #include <stdio.h>
// int main(){
//     int num=0;
//     int sum=0;
//     int loop=0;
//     printf("How many numbers you want to add: ");
//     scanf("%d",&loop);
//     for(int i=1; i<=loop; i++){
//         printf("Enter the value of number-%d: ",i);
//         scanf("%d",&num);
//         // sum = sum + num;
//         sum += num;
//     }
//     printf("Sum of All numbers: %d",sum);
    
// }



// datatype length??
// #include<stdio.h>
// int main(){
//     int number = 12154;
//     printf("%u \n",sizeof(number));
//     long int number1 = 12154;
//     printf("%u \n",sizeof(number1));
//     char alpha = 'A';
//     printf("%u",sizeof(alpha));
    
//     // int myArr[3] = {1,2};
//     // printf("%u",sizeof(myArr));
// }








// real world example program: write a program to ask user how many numbers wants to add then display its sum and also numbers using Array.

#include <stdio.h>
int main(){
    int nums[100];
    int uw=0;
    int sum=0;
    printf("Enter the numbers you want to add:");
    scanf("%d",&uw);
    
    for(int i=0; i<uw; i++){
        printf("Enter the value of number-%d: ",i+1);
        scanf("%d",&nums[i]);
    }
    
    for(int j=0; j<uw; j++){
        printf("Number %d: %d \n",j+1,nums[j]);
        sum += nums[j];
    }
    printf("Sum of all numbers: %d",sum);
}












