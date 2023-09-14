//9) Write a C program to check whether a number is Palindrome or not.

#include<stdio.h>
int main(){
    int n,rev=0;
    scanf("%d",&n);
    int m=n;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(rev==m) printf("yes it is palindrome");
    else printf("no");
}