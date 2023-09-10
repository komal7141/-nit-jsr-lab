// Write a C program to add ,subtract.multiply and division of  two numbers. 
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    char c;
    printf("enter the operator +,-,*,/");
    scanf("%c",&c);
    switch(c){
        case('+'):
        printf("%d",a+b);
        break;
        case('-'):
        printf("%d",a-b);
        break;
        case('/'):
        printf("%d",a/b);
        break;
        case('*'):
        printf("%d",a*b);
        break;
        default:
        printf("error");
    }
}