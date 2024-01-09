/*Read five person height and weight and count the number of person having height greater than 170 and
weight less than 50.*/
#include<stdio.h>
void main(){
    int n,i,count=0,j;
    int a[5],b[5];
    for(i=0;i<5;i++){
        printf("enter val of height:");
        scanf("%d",&a[i]);
    }
    i=0;
    for(i=0;i<5;i++){
        printf("enter val of weight:");
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]>170){
            if(b[i]<50){
                count++;
            }
        }
    }
    printf("count no=%d",count);
}