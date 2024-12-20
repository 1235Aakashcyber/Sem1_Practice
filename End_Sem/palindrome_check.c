#include<stdio.h>
#include<string.h>
int main(){
char S[100],temp[100];
printf("Enter the word to check for palindrome : ");
scanf("%s",S);
strcpy(temp,S);
strrev(temp);
if(strcmp(S,temp)==0){
    printf("Its a palindrome");
}
else{
    printf("Its NOT a palindrome");
}
return 0;
}