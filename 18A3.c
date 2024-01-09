/*Count simple interest using function*/
#include <stdio.h>
int intrest(int p,int f, int t);
int main(){ 
    int p,t;
    float r;
    printf("Enter Principal Amount : ");
    scanf("%d",&p);
    printf("Enter Rate of intrest : ");
    scanf("%f",&r);
    printf("Enter Time : ");
    scanf("%d",&t);
    int result = intrest(p,r,t);
    printf("%d",result);
    return 0;
}
int intrest(int p,int r,int t){
    int A=(p*r*t)/100;
    return A;
}