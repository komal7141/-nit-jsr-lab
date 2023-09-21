//wap to generate a sequence of fibonacci series
#include<stdio.h>
int main(){
    int n;
    printf("enter the num: ");
    scanf("%d",&n);
    int a=0,b=1;
    int nextTerm=a+b;
    printf("%d %d ",a,b);
    for(int i=3;i<=n;i++){
        printf("%d ",nextTerm);
        a=b;
        b=nextTerm;
        nextTerm=a+b;
    }
}