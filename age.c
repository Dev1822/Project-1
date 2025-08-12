#include <stdio.h>

int main(){
    int age;
    printf("Enter Age :");
    scanf("%d",&age);
    if(age<13){
        printf("Child");
    }
    else if(13<age && age<19){
        printf("Teen");
    }
    else if(age>=50){
        printf("Average");
    }
    else{
        printf("Fail");
    }
    return 0;
}