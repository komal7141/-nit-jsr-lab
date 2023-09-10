#include<stdio.h>
int main(){
    int a,b;
    printf("enter the numbers: ");
    scanf("%d %d",&a,&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swapping the number %d %d",a,b);
}