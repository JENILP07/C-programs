#include<stdio.h>
int main(){
    char arr1[100], arr2[100];
    printf("Enter a String: ");
    gets(arr1);
    printf("Enter a String: ");
    gets(arr2);
    int count1 = 0, count2 = 0;
    for(int i = 0 ; arr1[i] != '\0'; i++) {
        count1++;
    }  
    for(int i = 0 ; arr2[i] != '\0'; i++) {
        count2++;
    }    
    if(count1 != count2){
        printf("Not Equal");
    }
    else{
        int status=0;
        for(int i = 0 ; i < count1 ; i++) {
            if(arr1[i] != arr2[i]){
                status=1;
                break;
            }
        }
        if(status == 0){
            printf("Equal");
        }
        else{
            printf("Not Equal");
        }
    }
    return 0;
}