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
#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);//printing 0 and 1    
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }    
