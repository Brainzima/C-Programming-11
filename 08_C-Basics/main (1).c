#include <stdio.h>
int main(){
    float math = 0;
    float sc = 0;
    float ssc = 0;
    float hnd = 0;
    float eng = 0;
    int total = 500;
    float obmarks = 0;
    float per = 0;
    printf("*********Matric Marksheet**********\n");
    printf("Enter the marks of Math : ");
    scanf("%f",&math);
    printf("Enter the marks of Science : ");
    scanf("%f",&sc);
    printf("Enter the marks of Social Science : ");
    scanf("%f",&ssc);
    printf("Enter the marks of Hindi : ");
    scanf("%f",&hnd);
    printf("Enter the marks of English : ");
    scanf("%f",&eng);
    obmarks = math + sc + ssc + hnd + eng;
    per = obmarks / 500 * 100;
    printf("************************************\n");
    printf("Total Marks : %d \nObtained Marks : %.2f \nPercentage : %.2f% \n",total,obmarks,per);
    if(per >= 60){
        printf("Division : 1st");
    }else if(per >= 45){
        printf("Division : 2nd");
    }else if(per >= 30){
        printf("Division : 3rd");
    }else{
        printf("Division : Fail");
    }
    
}