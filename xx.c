#include<stdio.h>
int main(){
    int i,j,temp=5,a=1;
    char ch='A';
        //For Row
        for(i=1;i<=5;i++){
        //For Space
        for(j=1;j<=temp-i;j++)
        {
                printf(" ");
        }
        //For Star
        for(j=1;j<=2*i-1;j++)
        {
             if(j%2!=0){
            if(i%2==1){
                printf("%c",ch);
                ch++;
            }
            else{
                printf("%d",a);
                a++;
            }
            }
            else{
                printf(" ");
            }
        }   
    printf("\n");
    
    }
    return 0;
}