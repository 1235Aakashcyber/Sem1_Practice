/* This program displays the Floyd's triangle pattern like

1
23
456
78910

*/

#include<stdio.h>
int main(){
    int n;
    int k=1;
    printf("Enter the no. of rows you want to print : ");
    scanf("%d",&n);

for(int i =1; i<=n; i++){
    for(int j=1; j<=i; j++){
        printf("%d \t",k);
        k++;
    }
        printf("\n");
}
return 0;
}
