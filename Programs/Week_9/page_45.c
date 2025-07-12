//Write a program to search for the names you enter as string.

#include<stdio.h>
#include<string.h>
int main(){
int size;
printf("Enter the number of names you want to input : ");
scanf("%d",&size);
char S[size][30], search[30];
int count=0;
for(int i=0; i<size; i++){
    printf("Enter string : ");
    scanf("%s",S[i]);
}
printf("Enter string to search : ");
scanf("%s",search);
for(int i=0; i<size; i++){
    if(strcmp(S[i],search)==0){
        count++;
        printf("Found at index %d \n",i);
    }
}
if(count==0){
    printf("Not found");
}
return 0;    
}