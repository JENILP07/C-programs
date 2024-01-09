/*Function (power) */
#include <stdio.h>
int a(int x, int y);
int main(){
    int x, y;
    scanf("%d\n",&x);
    scanf("%d\n",&y);
    int res = a(x,y);
    printf("%d\n",res);
    return res;
}
int a(int x, int y){
    int c=1;
    for(int i=1; i<=y; i++){
            c = c*x;
    }
    return c;

}