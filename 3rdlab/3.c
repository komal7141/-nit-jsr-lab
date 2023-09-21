//input string is palindrome or not

//imp
// #include<stdio.h>
// int main(){
//     char str[100];
//     printf("enter the sentence :");
//     scanf("%[^\n]%*c",str);
//     printf("%s\n",str);
//     int count=0;
//     for(int i=0;i<str.size();i++){
//     if(str[] !='\n') count++;
//     else { }
//     }
// }

#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("enter the string: ");
    scanf("%s",str);
    int l=0;
    int h=strlen(str)-1;
    while(h>l){
        if(str[l++] != str[h--]){
            printf("%s is not a palindrome\n",str);
            return 0;
        }
    }
    printf("%s is palindrome\n",str);
    return 0;
}