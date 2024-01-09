/*structure*/
#include <stdio.h>
struct  book
{
    char book_name[30];
    int page_no;
    float price;

};
int main(){
    int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    struct book b[100];
    for(int i=0; i<2; i++){
        printf("Enter Book Name : ");
        scanf("%s",b[i].book_name);
        printf("Enter Book Page : ");
        scanf("%d",&b[i].page_no);
        printf("Enter Book Price : ");
        scanf("%f",&b[i].price);
        printf("Book Name : %s\n",b[i].book_name);
        printf("Page No : %d\n",b[i].page_no);
        printf("Price : %f\n",b[i].price);
    }
    return 0;
}
