// Write a c program to find the roots of a quadratic equation
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int d=sqrt((b*b) - (4*a*c));
    float r1= (-b-d)/(2*a);
    float r2= (-b+d)/(2*a);
    printf("%f %f",r1,r2);

}