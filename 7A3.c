  #include<stdio.h>
int main(){
    int a,b;
    char c;
    printf("Enter Operation:\n");
    scanf("%c",&c);
      printf("enter Value:\n");
    scanf("%d %d",&a,&b);
    switch(c)
    {
    case '+':
    printf("%d",a+b);
        break;
        case '-':
    printf("%d",a-b);
        break;
        case '*':
    printf("%d",a*b);
        break;
        case '/':
        if(b==0){
            printf("division not possible");
        }
        else{
    printf("%d",a/b);
        }break;
    default:
        break;
    }
return 0;
}