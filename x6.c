    //Largest integer value 
    #include<stdio.h>
    int main(){
      int n;
      printf("Enter Array size: ");
      scanf("%d",&n);
    int i,arr[n];
      for(i=0;i<n;i++){
         printf("Enter the value %d: ",i+1);
         scanf("%d",&arr[i]);
     }
     int max=arr[0];
      for(i=0;i<n;i++){
        if(max<arr[i]){
          max=arr[i];
        }
      }
        printf("Largest Integer=%d",max);
        return 0;
}