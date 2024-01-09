#include <stdio.h>
int main(){
    int a[3][3],i,j,positive=0,negative=0,null=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter a number");
            scanf("%d",&a[i][j]);
            if(a[i][j]>=1)
            {
                positive ++ ;
            }
            else if(a[i][j]<=(-1))
            {
                negative ++;
            }
        else 
        {
            null++;
        }
        }
        printf("\n");
    }
    printf("positive=%d negative=%d null=%d\n",positive,negative,null);
       return 0;
}