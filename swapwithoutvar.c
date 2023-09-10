#include<stdio.h>

int main(){
    int a,b;
    printf("enter the numbers: ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping the number is %d and %d",a,b);

}