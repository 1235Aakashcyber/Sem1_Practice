#include<stdio.h>
int main(){
char S[2][20];
int i,j;
for(i=0; i<2; i++){
    printf("Enter :");
    gets(S[i]);
}
for(i=0; i<2; i++){
    puts(S[i]);
    printf("\n");
}
return 0;    
}