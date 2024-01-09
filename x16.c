/**/
#include<stdio.h>
int main(){
    char s1[1000],s2[1000];
    printf("Enter Value of s1: ");
    gets(s1);
    printf("Enter Value of s2: ");
    gets(s2);
    int n;
    printf("Enter Value of n: ");
    scanf("%d",&n);
    int i;
    for ( i = 0; s2[i]!='\0' && i<n ; i++)
    {
        s1[i] = s2[i];
    }
    s1[i] ='\0';
    puts(s2);
    return 0;
}