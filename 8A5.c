#include<stdio.h>
int  main(){
    int i=1,odd=0,even=0,n;
    printf("Enter 10 integers\n");
while(i<10){
    scanf("%d",&n);
    if(n%2==0){
        even++;
    }
    else{
        odd++;
     }
     i++;
}
printf("odd=%d\n",odd);
printf("even=%d",even);
  return 0;
}