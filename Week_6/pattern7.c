/* This program displays the pattern like

*****
****
***
**
*

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows you want to print : ");
    scanf("%d",&n);
for(int i = 1; i<=n; i++){
    for(int j =5; j>=i; j--){
        printf("*");
    }
    printf("\n");
}
return 0;    
}