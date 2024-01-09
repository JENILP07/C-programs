/*Demonstrate int, float, double and char pointer*/
#include <stdio.h>
int main(){
    int *a,A;
    float *b,B;
    double *c,C;
    char *d,D;
    printf("Enter A : Enter B : Enter C : Enter D :\n");
    scanf("%d %f %lf %c ",&A,&B,&C,&D);
    a=&A;b=&B;c=&C,d=&D;
    printf("%d\n",*a);
    printf("%f\n",*b);
    printf("%lf\n",*c);
    printf("%c\n",*d);
    return 0;
}