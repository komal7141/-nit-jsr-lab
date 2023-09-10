#include<stdio.h>

// int fib(int n){
//     if(n==0||n==1) return 1;
//     return (n-1)+(n-2);
// }
// int main(){
//     int n ;
//     scanf("%d",&n);
//     printf("%d",fib(n));
// }

int main(){
    int n,a=0,b=1,c,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        sum=sum+a;
        c=a+b;
        a=b;
        b=c;
    }
    printf("sum=%d",sum);
}