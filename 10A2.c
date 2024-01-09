//Find the sum and average of different numbers which are accepted by user as many as user wants.
#include<stdio.h>
int main(){
    int n;
    printf("Array Size:");
    scanf("%d",&n);
    int a[n],i,sum=0;
    for(i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
     float avg=0;
     avg=sum/n;
     printf("\nSum = %d",sum);
     printf("\nAverage = %f",avg);
       return 0;

}
