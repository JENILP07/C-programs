/*string copy*/
#include<stdio.h>
int main(){
 char s1[100],s2[100];
 printf("Enter String 1: ");
 gets(s1);
 printf("Enter String 2: ");
 gets(s2);
     int i;
     for(i = 0; s1[i]!='\0'; i++) {
        /* only for counting the value of s1 till \0*/
     }
        for(int j = 0; s2[j]!='\0' ; j++) {
            s1[i] = s2[j]; 
            i++;          
        }
         s1[i] = '\0';
         printf("String 1 : ");
         puts(s1);
         return 0;
}