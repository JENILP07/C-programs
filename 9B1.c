//Print all uppercase and lowercase alphabets.
#include<stdio.h>
void main(){
    char n='a',o='A';
    while(n<='z'&& o<='Z'){
        printf("%c %c\n",n,o);
        n++;
        o++;
    }
}