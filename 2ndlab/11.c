//11) Write a c program to find H.C.F. and L.C.M.
#include<stdio.h>
int main(){
    int a,b,max;
    
    printf("enter the two positive integer: ");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    while(1){
        if((max % a==0) && (max % b==0)){
            printf("LCM=%d\n",max);
            break;
        }
        max++;
    }
    printf("HCF=%d",(a*b)/max);
    
}