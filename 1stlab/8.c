//C program to calculate X^N (X to the power of N) using pow function. 
#include<stdio.h>
#include<math.h>

int main(){
    int x,n;
    scanf("%d %d",&x,&n);
    int y = pow(x,n);
    printf("%d ",y);

}