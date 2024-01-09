/**/
#include <stdio.h>
int main(){
    int city[3][25]={"Baroda", "Rajkot", "Morbi"};
    printf("%c",**(city+1));
    return 0;
}