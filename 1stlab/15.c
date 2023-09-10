// Write a c program to check if an input number is divisible by 2 or 3 or both. 
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%2==0 || n%3==0  || n%6==0) 
    printf("yes");
    
}