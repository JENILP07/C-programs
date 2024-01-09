/*Search element in array.*/
#include<stdio.h>
int main(){
    int i,n,b,flag=0;
    printf("Enter Value of n: ");
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++){
        printf("Enter Value of Array : ");
        scanf("%d",&a[i]);
    }
    printf("Enter value of key: ");
    scanf("%d",&b);
    for(i=0;i<n;i++){
        if(a[i] == b){
            flag=1;
            break;
        }
       
    }

    if(flag==1){
        printf("a[%d]=%d",i,a[i]);
    }
     else {
            printf("No Key Element found");
        }
    return 0;
}