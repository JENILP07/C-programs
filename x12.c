#include<stdio.h>
int main(){
    char s1[100],s2[100];
    printf("Enter String 1:\n");
    gets(s1);
    printf("Enter String 2:\n");
    gets(s2);
    int i;
    for(i = 0; s2[i]!=0 ; i++) {
    s1[i]=s2[i];
    }
    s1[i]='\0';
    printf("String 1 : ");
    puts(s1);
    return 0;
}