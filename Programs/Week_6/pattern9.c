/* This program displays the pattern like

54321
4321
321
21
1

*/

#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the number of rows you want to print : ");
    scanf("%d",&n);
    m=n;
for(int i = 1; i<=n; i++){
    for(int j =m; j>=1; j--){
        printf("%d",j);
    }
    printf("\n");
    m--;
}
return 0;    
}