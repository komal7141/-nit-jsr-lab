//Write a C program to find the distance between two points. 
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int dist=sqrt(pow(b-a,2) + pow(d-c,2));
    printf("%d",dist);
}