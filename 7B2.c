#include<stdio.h>
void main(){
    char x;
    printf("Enter a Character:\n");
    scanf("%c",&x);
    (x>='A'&&x<='Z'||x>='a'&&x<='z')?printf("Char is Alphabet"):printf("Char ic not an Alphabet");
}