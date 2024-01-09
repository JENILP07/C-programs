/*Function (Prime)*/
#include <stdio.h>
int a(int x);
void main(){
    int x;
    printf("Enter A Number : ");
    scanf("%d",&x);
    int res = a(x);
    if(res==1){
        printf("Prime\n");
    }
    else{
        printf("Not Prime\n");
    }
    
}
int a(int x){
    int c=0;
       for(int i=1; i<= x; i++){
            if(x%i==0) {
                c++;
            }
    }
    if (c==2){
        return 1;
    }
    else{
        return 0;
    }

}