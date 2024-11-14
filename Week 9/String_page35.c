#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
char string[100];
int i,countv=0, countc, len, ws=0, digit=0;   //ws=white space
clrscr();
printf("Enter the line of text : ");
gets(string);
len = strlen(string);
//vowel
for(i=0; i<len; i++){
    if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U'){
	countv++;
    }
}
printf("Vowels are : %d \n",countv);
//white space
for(i=0; i<len; i++){
    if(string[i] ==' '){
	ws++;
    }
}
printf("White Space : %d \n", ws);

//consonant
countc = len - (countv + ws);
printf("Consonants are : %d \n",countc);

//Words
printf("Words are : %d",ws+1);

    getch();
    return 0;
}