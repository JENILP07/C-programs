#include<stdio.h>
#include<math.h>
int main(){
    int i=0;
    float a;
    while(i<=9)
    {
        a=sqrt(i);
        printf("%d:%2f\n",i,a);
        i++;
}
   return 0;
}