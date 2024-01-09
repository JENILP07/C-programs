/*Perform Addition of two matrices.*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter Size of Matrix : ");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter Matrix 1 :");
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter Matrix 2 :");
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j] + b[i][j];
            printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    return 0;
}