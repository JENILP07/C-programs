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