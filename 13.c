//13) Write a C program to check if an integer is prime or not. 
#include<stdio.h>
int main(){
    int n,flag=0;
    printf("enter the number: ");
    scanf("%d",&n);
    if (n == 0 || n == 1)
    flag = 1;
    for(int i=2;i<n;i++){
        if(n%i==0 ) {
            flag=1;
            break;
        }
    }
    if(flag==0) printf("%d number is prime ",n);
    else printf("%d number is not prime",n);
}
