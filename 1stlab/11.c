//Write a c program to calculate square and square root of a given positive number.
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int z=n*n;
    printf("%d\n",z);
    int a=sqrt(n*n);
    printf("%d",a);
}