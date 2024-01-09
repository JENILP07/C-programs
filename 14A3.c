/*Count number of even or odd number from an array of n numbers.*/
#include<stdio.h>
void main(){
    int n,i,odd=0,even=0;
    printf("enter val of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter val:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("even no=%d and odd no=%d",even,odd);
}