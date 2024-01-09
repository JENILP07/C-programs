/*Count number of positive, negative and zero elements from 3 X 3 matrix*/
#include <stdio.h>
int main(){
    int matrix[3][3],pos=0,neg=0,zero=0;

    // Input values into the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(matrix[i][j] < 0){
                neg++;
             }
                if(matrix[i][j] > 0){
                   pos++;
                }
                    if(matrix[i][j] == 0){ 
                       zero++;
                    }
        }
    }
    printf("Positive = %d Negative = %d Zero = %d\n",pos, neg, zero);

    return 0;
}