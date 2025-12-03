/* operators:
arithmetic operators:
+     a+b 
-     a-b
*     a*b 
/     a/b
%     a%b 

assign operators:
=     a=10, b=50
+=     a += b   (a = a+b)
-=     a -= b   (a = a-b)
*=     a *= b   (a = a*b)
/=     a /= b   (a = a/b)

logical operators:
&&     and
||     or 
==     equals

comparison operators:
<       a < b 
>       a > b 
>=       a >= b 
<=       a <= b

*/


// write a program to take three numbers from the user and display the largest number among them.

#include <stdio.h>
int main(){
    int num1=0;
    int num2=0;
    int num3=0;
    printf("********Enter three numbers to get largest one*********\n");
    printf("Enter the num1: ");
    scanf("%d",&num1);
    printf("Enter the num2: ");
    scanf("%d",&num2);
    printf("Enter the num3: ");
    scanf("%d",&num3);
    
    if( num1>num2 && num1>num3 ){
        printf("Num1 %d is the largest number among them.",num1);
    }
    if( num2>num1 && num2>num3 ){
        printf("Num2 %d is the largest number among them.",num2);
    }
    if( num3>num1 && num3>num2 ){
        printf("Num3 %d is the largest number among them.",num3);
    }
    else{
        printf("All the numbers are equals");
    }
}



// write a program to take five numbers from the user and display the largest number among them.













