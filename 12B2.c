//. Estimate the value of the mathematical constant e. 
#include <stdio.h>
int main(){
     int num; 
     float factorial;
     printf("Enter a number: ");
     scanf("%d", &num);
     factorial = 1;
     double e = 0;
        for(int i = 1; i < num ; i++){
                 for(int i = 1; i <= num; i++){
                         factorial *= i;
                        printf("%f\n", factorial);
                         }
             e+=1+1/factorial;
             factorial = 1;
        }
        printf("The value of e is %lf", e);
    return 0;
}
