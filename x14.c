/*String Revere*/
#include<stdio.h>
int main(){
    char a[1000];
    printf("Enter a string : ");
    gets(a);
    int length=0;
    int i;
    for(i=0; a[i]!='\0'; i++){
        length++;
    }
    int j = length-1;
    for(i=0 ;i<length/2;i++){
        char temp =a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }
    puts(a);
    return 0;
}