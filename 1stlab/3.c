//) Write a C program to find the simple interest and compound interest.
#include<stdio.h>
int main(){
    int p,r,t;
    printf("a b and c");
    scanf("%d %d %d",&p,&r,&t);
    int si=(p*r*t)/100;
    printf("%d\n",si);
    int ci=p*pow((1+(r/100)),t)-p;
     printf("%d",ci);
}