//wap to multiply two matrix

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
    printf("enter the number of row: ");
    scanf("%d",&r);
    printf("enter the number of column: ");
    scanf("%d",&c);
    printf("enter the 1st matrix: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter the 2nd matrix: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
     
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            mul[i][j]=0;
            for(k=0;k<c;k++){
                mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
            }
        }
    }

      printf("multiplication of two matrix:\n ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}