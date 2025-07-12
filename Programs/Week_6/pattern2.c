/* This program displays the pattern like

1
12
123
1234

*/

#include<stdio.h>
int main(){
int n;
printf("Enter the no. of rows you want to print : ");
scanf("%d",&n);
for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        printf("%d",j);
    }
    printf("\n");
}
return 0;    
}