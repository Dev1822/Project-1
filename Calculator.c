#include <stdio.h>

int main(){
    float a,b;
    char c;
    printf("Number 1:");
    scanf("%f",&a);
    printf("Number 2:");
    scanf("%f",&b);
    printf("Operator (+,-,*,/):");
    scanf(" %c",&c);
    if(c=='+'){
        float add=a+b;
        printf("%f + %f = %f",a,b,add);
    }
    else if(c=='-'){
        float subtract=a-b;
        printf("%f - %f = %f",a,b,subtract);
    }
    else if(c=='*'){
        float multiply=a*b;
        printf("%f * %f = %f",a,b,multiply);
    }
    else if(c=='/'){
        if(b==0){
            printf("Don't take 0");
        }
        else{
            float divide=a/b;
            printf("%f / %f = %f",a,b,divide);
        }
    }
    else{
        printf("Invalid Operator");
    }
    return 0;
}