#include<stdio.h>
int add(){
    int n;
    printf("Enter no of values to add\n");
    scanf("%d", &n);
    int a[n],sum=0;
    for (int i=0; i<n; i++){
        printf("Enter value : ");
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    return sum;
}

int sub(){
    int n;
    printf("Enter no of values to sub\n");
    scanf("%d", &n);
    int a[n],sum=0;
    for (int i=0; i<n; i++){
        printf("Enter value : ");
        scanf("%d", &a[i]);
        sum-=a[i];
    }
    return sum;
}

int multi(){
    int n;
    printf("Enter no of values to Multiply\n");
    scanf("%d", &n);
    int a[n],sum=1;
    for (int i=0; i<n; i++){
        printf("Enter value : ");
        scanf("%d", &a[i]);
        sum*=a[i];
    }
    return sum;
}

int div(){
    int n;
    printf("Enter no of values to divide\n");
    scanf("%d", &n);
    double a[n],sum=1;
    for (int i=0; i<n; i++){
        printf("Enter value : ");
        scanf("%lf", &a[i]);
        sum/=a[i];
    }
    return sum;
}