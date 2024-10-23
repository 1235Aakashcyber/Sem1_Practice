/* This program displays the pattern like

A
BB
CCC
DDDD

*/

#include<stdio.h>
int main(){
    int n;
    char a='A';
    printf("Enter the number of rows you want to print : ");
    scanf("%d",&n);
for(int i = 1; i<=n; i++){
    for(int j =1; j<=i; j++){
        printf("%c",a);
    }
    a++;
    printf("\n");
}
return 0;    
}