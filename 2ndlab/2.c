

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
}