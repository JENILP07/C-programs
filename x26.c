/*Struct Clock*/
#include<stdio.h>
struct time{
    int hour;
    int sec;
    int min;
};
int main(){
    struct time t1,t2,t3;
    scanf("%d %d %d ",&t1.hour,&t1.min,t1.min);
        scanf("%d %d %d ",&t2.hour,&t2.min,t2.min);
        t3.sec=t2.sec+t1.sec;
        while(t3.sec>59) {
            t3.min+=1;
            t3.sec=t3.sec-60;
        }
        while(t3.min>59) {
            t3.hour+=1;
            t3.min=t3.min-60;
        }
        t3.hour+=t1.hour+t2.hour;
        printf("result hh:mm:ss =%d:%d:%d",t3.hour,t3.min,t3.sec);
    return 0;
}