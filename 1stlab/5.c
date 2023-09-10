//Write a c program to find the area and circumference of a circle. 
#include<stdio.h>
#define pie 3.14
int main(){
    int r;
    scanf("%f",&r);
    float per=2*pie*r;
    float area=pie*r*r;
    printf("%f %f ",per,area);

}