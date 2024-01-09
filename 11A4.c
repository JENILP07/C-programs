//Calculate 𝑥𝑦 without using power function. 
#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = 1;
    for (int i = 1; i <= y; i++)
    {
        if(y == 0){
            printf("1");
        }
        else{
        sum = sum * x;
        }

    }
    printf("%d", sum);
    return 0;
}