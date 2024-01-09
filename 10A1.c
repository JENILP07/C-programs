/*Find out sum of first and last digit of a given number*/
#include<stdio.h>
int main(){
    int lastdigit,firstdigit,n,sum;
    scanf("%d",&n);
    lastdigit=n%10;
    while(n>10){
        n/=10;
    }
     firstdigit=n;
    sum=firstdigit+lastdigit;
    printf("sum=%d",sum);
    return 0;
}