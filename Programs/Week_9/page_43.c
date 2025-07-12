#include<stdio.h>
#include<string.h>
int main(){
char S[5][10] = {"Mumbai", "Delhi", "Patna", "Shimla", "Dubai"};
char temp[10];
for(int i=0; i<5; i++){
    for(int j=i+1; j<5; j++){
if(strcmp(S[i],S[j])>0){
    strcpy(temp,S[j]);
    strcpy(S[j],S[i]);
    strcpy(S[i],temp); 
}
}
}
for(int i=0; i<5; i++){
    puts(S[i]);
}
return 0;    
}