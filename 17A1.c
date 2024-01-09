/* Print value and address of a variable*/
#include<stdio.h>
int main(){
  int a=5,*ptr;
  ptr=&a;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    return 0;
}