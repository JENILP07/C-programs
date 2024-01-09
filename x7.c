#include <stdio.h>
int main(){
    int n;
    printf("Enter Size of array: ");
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++){
        printf("Enter the value %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int odd=0,even=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else {
            odd++;
        }
    }
     printf("even: %d\todd: %d",even,odd);
     return 0;
}