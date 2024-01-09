#include<stdio.h>
#include<math.h>
int main(){
    int i=0;
    float a;
    while(i<=10)
    {
        a=pow(i,2);
        printf("%d:%2f\n",i,a);
        i++;
}


    return 0;
}