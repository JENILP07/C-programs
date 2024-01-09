#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter a string : ");
    gets(str);
    for(int i = 0; i != strlen(str); i++){
        if(str[i] >= 'A' && str[i] <='Z'){
            str[i]+=32;
        }
    }
    puts(str);
    return 0;
}