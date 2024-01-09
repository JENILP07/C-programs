//Check whether the given number is Armstrong or not

#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int sum = 0;
    int count = 0;
    int rem=0;
    printf("Enter a number: ");
    scanf("%d", &n);
     int temp = n,num=n;
    while (num !=0) 
    {
        num/=10;
        printf(" num = %d\n", num);
        count++;
        printf("count = %d\n",count);
    }
    
     while(temp != 0)
    {
     rem = temp % 10;
     printf("rem = %d\n",rem);
        sum += pow( rem, count);
        printf("Sum=%d\n", sum);
        temp /= 10;
    }
    if(sum == n)
        printf("%d is an Armstrong number", n);
    else
        printf("%d is not an Armstrong number", n);
    return 0;
}