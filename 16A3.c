/*. Read and store the roll no and marks of 20 students using 2D array*/
#include <stdio.h>
int main(){
    int stu[20][20];

    for(int i =0 ; i < 20 ; i++){
        printf("Enter Roll  : %d\t", i+1);
        for(int j = 0 ; j < 1 ; j++){
            printf("Enter Marks  : ");
            scanf("%d", &stu[j]) ;
        }
    }
    
    return 0;
}