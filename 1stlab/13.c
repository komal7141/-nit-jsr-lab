//) Write a c program to check whether the given number is odd or even. 

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n%2==0) printf("even");
    else printf("odd");
}