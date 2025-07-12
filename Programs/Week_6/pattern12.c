/* This program displays the pattern like

    1
   121
  12321
 1234321
123454321

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
    for(int j=1; j<=i; j++){
        printf("%d \t",j);
    }
    for(int m=1,j=i-1; m<i; m++){
        printf("%d \t",j);
        j--;
    }
    printf("\n");
}

return 0;    
}