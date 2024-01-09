#include<stdio.h>
int main(){
int a=101;
while(a<=200){
    if(a%7==0 && a%5!=0){
        printf("%d\n",a);
    }a++;
}
return 0;
}