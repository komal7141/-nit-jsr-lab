#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int m=0, a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    float mean=sum/n;
    int sum1=0;
    for(int i=0;i<n;i++){
        m=m+a[i]*a[i];
    }
    float std=sqrt((m*m)/n-(mean*mean));
    printf("mean=%f \n std=%f",mean,std);
}