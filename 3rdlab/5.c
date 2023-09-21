//wap to read of line text and find vowel and consonants presents in the text
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("enter the string: ");
    scanf("%s",str);
    for(int i=0;str[i] != '\0';i++){
          if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u'||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' ){
            printf("%c is vowel\n",str);
          }
          else printf("%c is consonants\n",str[i]);
    }
}