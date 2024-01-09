/*pointer*/
#include<stdio.h>
int main(){
  int a=5,b=5;
  int *ptr,*p;
  ptr=&a;
  p=&b;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
        printf("%d\n",p);
    printf("%d\n",*p);
    return 0;
}