#include<stdio.h>
int main(){
    int a,b,c;
    printf("a= b= c=\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b==c){
        printf("Triangle is Equilateral");
    }
     if(a==b || a==c || b==c){
        printf("Triangle is Isosceles");
    }
      if(a!=b!=c){
        printf("Triangle is Scalene\n");
     }
      if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
        printf("Triangle is RightAngle");
    }
    return 0;
}