/*Store n elements in an array and print the elements using pointer.*/
#include <stdio.h>
int main (){
    int n;
    printf("Enter Size of array : ");
    scanf("%d",&n);
    int a[n],*ptr;
    for(int i=0; i<n; i++){
        printf("Enter Elements of arry \n");
        scanf("%d",&a[i]);
        ptr = &a[i];
        printf("%d ",*ptr);
    }

    return 0;
}