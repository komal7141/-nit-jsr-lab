//sort array in assending order

#include<stdio.h>
int main(){
    int n;
    printf("enter the size: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
        }
        }
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}