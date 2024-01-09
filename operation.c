#include<stdio.h>
#include<math.h>
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
        sum=a[0];
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
    double dividend, divisor, result;

    // Input the numbers to be divided
    printf("Enter the dividend: ");
    scanf("%lf", &dividend);

    printf("Enter the divisor: ");
    scanf("%lf", &divisor);

    // Check if the divisor is not zero to avoid division by zero
    if (divisor != 0) {
        result = dividend / divisor;
        printf("Result: %.2lf\n", result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return result;
}

int power(){
    int a,b;
    printf("Enter value 1 : ");
    scanf("%d", &a);
    printf("Enter value 2 : ");
    scanf("%d", &b);
    int c=pow(a,b);
    return c;
}

void swap(int *a,int *b){
        int temp=*a;
        *a=*b;
        *b=temp;
        }