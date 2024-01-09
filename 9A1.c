#include<stdio.h>
void main(){
    int a=1,n,sum=0;
    scanf("%d",&n);
    while(a<=n){
    if(a%2!=0){
        sum=sum+a;
        }
        else{
            sum=sum-a;
        }
        a++;
    }
printf("%d",sum);
}