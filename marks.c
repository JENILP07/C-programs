#include<stdio.h>
void main(){
    float a,b,c,d,e,f;
    printf("marks=");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    f=(a+b+c+d+e)/5.00;
     if(f<=35){
        printf("Fail");
        }
    else if(f>=36 && f<=45){
        printf("Pass Class");
    }
    else if(f>=46 && a<=60){
        printf("Second Class");
    }
    else if(f>=61 && a<=70){
        printf("First Class");
    }
    else if(f>=71){
        printf(" Distinction");
    }
}