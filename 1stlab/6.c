//Write a c program to find the area and height of an equilateral triangle. 
#include<stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    float a=(1.73*s*s)/4;
    printf("%f\n",a);
    float h=(1.73 *a)/2;
    printf("%f\n",h);
}