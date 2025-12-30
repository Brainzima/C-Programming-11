// #include <stdio.h>
// int main(){
//     int i, j, k, space, rows;
    
//     printf("Enter the rows number: ");
//     scanf("%d",&rows);
//     space = rows + 4 - 1;
    
//     for(i=1; i<=rows; i++){
        
//         for(k=space; k>=1; k--){
//             printf(" ");
//         }
        
//         for(j=1; j<=i; j++){
//             printf("* ");
//         }
//         printf("\n");
//         space--;
//     }

//     return 0;
// }








// #include <stdio.h>
// int main(){
//     int i, j, k, space, rows;
    
//     printf("Enter the rows number: ");
//     scanf("%d",&rows);
//     space = rows + 4 - 1;
    
//     for(i=1; i<=rows; i++){
        
//         for(k=space; k>=1; k--){
//             printf(" ");
//         }
        
//         for(j=1; j<=i; j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//         space--;
//     }

//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int i, j, k, space, rows;
    
//     printf("Enter the rows number: ");
//     scanf("%d",&rows);
//     space = rows + 4 - 1;
    
//     for(i=1; i<=rows; i++){
        
//         for(k=space; k>=1; k--){
//             printf(" ");
//         }
        
//         for(j=1; j<=i; j++){
//             printf("%d ",i);
//         }
//         printf("\n");
//         space--;
//     }

//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int i, j, k, space, rows;
    
//     printf("Enter the rows number: ");
//     scanf("%d",&rows);
//     space = rows + 4 - 1;
    
//     for(i=1; i<=rows; i++){
        
//         for(k=space; k>=1; k--){
//             printf(" ");
//         }
        
//         for(j=1; j<=i; j++){
//             printf("%d ",k);
//         }
//         printf("\n");
//         space--;
//     }

//     return 0;
// }


#include <stdio.h>
#include <stdbool.h>
int main(){
    
    // bool loop=true;
    
    while (true){
        int i, j, k, space, rows;
    
    printf("Enter the rows number: ");
    scanf("%d",&rows);
    space = rows + 4 - 1;
    
    for(i=1; i<=rows; i++){
        
        for(k=space; k>=1; k--){
            printf(" ");
        }
        
        for(j=1; j<=i; j++){
            printf("+ ");
        }
        printf("\n");
        space--;
    }
    }

    return 0;
}
