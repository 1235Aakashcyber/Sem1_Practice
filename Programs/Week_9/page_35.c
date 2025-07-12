#include<stdio.h>
#include<string.h>
int main(){
char S[100];
int len,cv=0,cc=0,digit=0,ws=0,sc=0;
printf("Enter the string : ");
gets(S);
len = strlen(S);
strlwr(S);
for(int i=0; i<len; i++){
    if(S[i]>='a' && S[i]<='z'){
        if(S[i] == 'a'|| S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u'){
        cv++;
    }
    else {
        cc++;
    }}
    else if(S[i]==' '){
        ws++;
    }
    else if(S[i]<='9' && S[i]>='0'){
        digit++;
    }
    else{sc++;}
    
}
printf("string len : %d \n",len);
printf("Vowels are : %d \n", cv);
printf("Consonants are : %d \n", cc);
printf("Digits are : %d \n", digit);
printf("White space are : %d \n", ws);
printf("Words are : %d \n",ws+1);
printf("Special characters are : %d \n",sc);
return 0;    
}