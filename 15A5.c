/*Input a string in character array and print string and length of string*/
#include<stdio.h>
int main() {
    int i;
    char a[100];
      printf("Enter Value of String : ");
        gets(a);
        int x=0;
    for( i=0; a[i] != '\0'; i++){
        x++;
    }
    printf("%d \n",x);
    puts(a);
    return 0;
}