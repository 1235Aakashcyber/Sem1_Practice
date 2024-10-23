/* This program displays the pattern like

A
AB
ABC
ABCD

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows you want to print : ");
    scanf("%d",&n);
    if(n>26){printf("'N' should be equal to or less than 26"); return 0;}
for(int i = 1; i<=n; i++){
    char a='A';
    for(int j =1; j<=i; j++){
        printf("%c",a);
        a++;
    }
    printf("\n");
}
return 0;    
}