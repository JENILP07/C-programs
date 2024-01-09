#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter values:\n");
    scanf("%d %d %d",&a,&b,&c); 
    d=(a>b)?1:2;
    switch(d)
    {
        case 1:
        printf("A*C=%d",a*c);
        break;
        case 2:
        printf("B*C=%d",b*c);
        break;
    }
    return 0;
}