#include<stdio.h>
void main(){
    int month;
    printf("Enter month:");
    scanf("%d",&month);
    if(month>=1 && month<=12){
    switch(month){
    case 2:
    printf("28");
   break;
    case 4:
    case 6:
    case 8:
    case 11:
    printf("30");
    break;
    default:
    printf("31");
    break;
    }}
    else{
        printf("wront Input");
    }
}