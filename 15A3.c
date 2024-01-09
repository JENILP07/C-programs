/*Count number of elements divisible by 3 in array.*/
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter Value of n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i < n;i++){
    printf("Enter value of array : ");
    scanf("%d",&a[i]);
    }
    int count=0;
    for(i=0; i < n ; i++){
        if(a[i] % 3 == 0){
            count++;
        }
    }
    printf("Number of elements divisible by 3 = %d\n",count); 
    return 0;
}