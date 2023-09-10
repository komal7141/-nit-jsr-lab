// write a C program to find the Total, Average, and Percentage of Five Subjects or N number of subjects. 
#include<stdio.h>

int main(){
    int p,c,m,h,e;
    scanf("%d %d %d %d %d",&p,&c,&m,&h,&e);
    int total=p+c+m+h+e;
    float avg=(p+c+m+h+e)/5;
    float per = avg;
    printf("%d %f %f",total,avg,per);

}