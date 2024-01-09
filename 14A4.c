/*Find Max, Min, Sum, Avg. of given numbers from an array.*/
#include<stdio.h>
void main(){
    int n,i,max,min,sum=0;
    float avg=0;
    printf("enter val of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter val:");
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++){
        sum=sum+a[i];
        if(min>a[i]){
            min=a[i];
        }
        if(max<a[i]){
            max=a[i];
        }
        avg=sum/n;
    }
    printf("avg of array:%f\n",avg);
    printf("sum of array:%d\n",sum);
    printf("max val of array:%d\n",max);
    printf("min val of array:%d\n",min);
}