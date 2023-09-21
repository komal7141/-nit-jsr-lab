//max and min of given array

#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int max=INT_MIN;
    int min=INT_MAX;
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        else if(a[i]<min){
            min=a[i];
        }
    }
    printf("max=%d\n",max);
    printf("min=%d",min);
}