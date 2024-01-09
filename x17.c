//string concataination means adding 2nd string to 1st one amen
#include<stdio.h>
int main () {
    char s1[100],s2[100];
    printf("ENter string 1");
    gets(s1);
    printf("Enter string 2");
    gets(s2);
    int i,j;
    for(i=0;s1[i]!='\0';i++){
  
    }
//i ni anadar na null charcter ni position khabr padi gayi
     for(j=0;s2[i]!='\0';j++){
           s1[i]=s2[j];
           i++;
    
    }
    s1[i]='\0';
    
puts(s1);
return 0;
     }