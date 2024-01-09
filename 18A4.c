/*. Return the maximum of three floating-point numbers.*/
float max(float a, float b, float c);
int main(){
    float a,b,c;
    printf("Enter the value A B C : ");
    scanf("%f %f %f",&a,&b,&c);
    float m = max(a,b,c);
    printf("%f",m);
    }
float max(float a, float b, float c){
    if(a > b && a > c){
    return a;
    }
    else if(b>a && b > c){
    return b;
    }
    else{
    return c;
    }
}