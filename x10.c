#include <stdio.h>
int main(){
    int a[2][2],i,j,b[2][2],x[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter a number");
            scanf("%d",&a[i][j]);
            printf("Enter a number");
            scanf("%d",&b[i][j]);
            x[i][j]=a[i][j]+b[i][j];

        }
          printf("sum: %d",x[i][j]);
        printf("\n");
    }
       return 0;
}