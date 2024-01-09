#include<stdio.h>
void main(){
    char a;
    printf("Input:");
    scanf("%c",&a);
     if(a>='A' && a<='Z'){
        printf("Input is Uppercase");
        }
    else if(a>='a' && a<='z'){
        printf("Input is Lowercase");
    }
    else if(a>='0' && a<='9'){
        printf("Input is Digit");
    }
    else{
        printf("Input is Special Characer");
    }
}