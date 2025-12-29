#include <stdio.h>
int main(){
    int num = 0;
    printf("Enter the number of stars you want: ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            printf("%d",i);
        }
        printf("\n");
    }
    
}