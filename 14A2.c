/*Count number of positive or negative number from an array of n numbers*/
#include<stdio.h>
void main(){
    int n,i,positive=0,negative=0;
    printf("enter val of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter val:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>=0){
            positive++;
        }
        else{
            negative++;
        }
    }
    printf("positive no=%d and negative no=%d",positive,negative);
}