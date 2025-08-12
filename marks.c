#include <stdio.h>

int main(){
    int marks;
    printf("Enter Marks :");
    scanf("%d",&marks);
    if(marks>=90){
        printf("Excellent");
    }
    else if(marks>=75){
        printf("Good");
    }
    else if(marks>=50){
        printf("Average");
    }
    else{
        printf("Fail");
    }
    return 0;
}