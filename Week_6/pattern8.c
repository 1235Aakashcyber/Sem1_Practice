/* This program displays the pattern like

12345
1234
123
12
1

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows you want to print : ");
    scanf("%d",&n);
for(int i = n; i>=1; i--){
    for(int j =1; j<=i; j++){
        printf("%d",j);
    }
    printf("\n");
}
return 0;    
}