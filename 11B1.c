//Print the Fibonacci Series.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n",c);
    }
    return 0;
}