#include<stdio.h>
int main(){
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int i,arr[n];
      for(i=0;i<n;i++){
        printf("Enter the value %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int temp;
    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
        temp=0;
        }
    else{
        temp=1;
    }
}
if(temp==1){
    printf("Acending");
}
else if(temp==0){
    printf("Not Acending");
}
    return 0;
}