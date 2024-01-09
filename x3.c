#include<stdio.h>
int main(){
    int i,j,temp=5;
    //For Row
    for(i=1;i<=5;i++){
        //For Space
        for(j=1;j<=5;j++){
                printf(" \t");
        }
        //For Star
        for(j=1;j<=i;j++){
            printf("*\t");
        }
    printf("\n");
    }
    return 0;
}