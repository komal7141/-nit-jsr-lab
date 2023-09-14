//10) Write a C Program to make a Simple Calculator Using switch...case.
#include<stdio.h>
int main(){
    int a,b;
    char op; 
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
     printf("Enter two operands: ");
     scanf("%d %d", &a, &b);
     switch (op) {
     case '+':
      printf("%d + %d = %d", a, b, a+b);
      break;
      case '-':
      printf("%d - %d = %d", a, b, a-b);
      break;
      case '*':
      printf("%d * %d = %d", a, b, a*b);
      break;
      case '/':
      printf("%d / %d = %d", a, b, a/b);
      break;
         default:
        printf("Error! operator is not correct");
  }
}