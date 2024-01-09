/*Recurssion*/
#include <stdio.h>
int no(int n);
void main(){
int n;
printf("Enter a Number : ");
scanf("%d",&n);
int res = no(n);
printf("Number : %d\n",res);
}
int no(int n){
    
        if(n == 0){
            return 0;
        }
        else{
            return 1+no(n/10);
        }
    
}