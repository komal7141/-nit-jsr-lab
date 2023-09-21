//convert decimal to binary and print the numbers of 0s and 1s in the binary number 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10],n,i;
    printf("enter the number: ");
    scanf("%d",&n);
    for(int i=0;n>0;i++){
        a[i]=n%2;
        n=n/2;
    }
    printf("binary of given number is= ");
    for(int i=i-1;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}