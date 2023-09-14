//8) Write a c program to check Armstrong Number. 
#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int ori=n;
    int res=0;
    while(n>0){
        m=n%10;
        res=res+(m*m*m);
        n=n/10;
    }
    if(res==ori) printf("yes");
    else printf("no");
}