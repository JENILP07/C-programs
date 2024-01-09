//Sum Of N elements
#include<stdio.h>
int main(){
    int n;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    int i,arr[n],sum=0;
    for(i=0;i<n;i++){
        printf("Enter Element %d: ",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
      printf("Sum:%d",sum);
    return 0;
}