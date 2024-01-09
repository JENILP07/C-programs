#include<stdio.h>
void main(){
    int sec,h,m,s;
    printf("Enter a second:");
    scanf("%d",&sec);
    h=sec/3600;
    m=(sec-h*3600)/60;
    s=sec%60;
    printf("hours=%d min=%d sec=%d",h,m,s);
}