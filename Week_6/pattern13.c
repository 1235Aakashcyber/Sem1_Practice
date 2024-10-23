/* This program displays the pattern like

   A
  ABA
 ABCBA
ABCDCBA

*/

#include<stdio.h>
int main(){ 
    int n;
    printf("Enter the number of rows you want to print : ");
    scanf("%d",&n);

for(int i =1; i<=n; i++){
    for(int k=0; k<=n-i-1; k++){
        printf("\t");
    }
            char c='A';
    for(int j=1; j<=i; j++){
        printf("%c \t",c);
        c++;
    }
    for(int m=1; m<i; m++){
        printf("%c \t",c-2);
        c--;
    }
    printf("\n");
}

return 0;    
}