#include<stdio.h>
struct book_info{
    char title[20];
    int price;
    char author[20];
}book[3];
int main(){
for(int i=0; i<3; i++){
    printf("For book %d\n",i+1);
    printf("Enter book title: ");
    scanf("%s",book[i].title);
    printf("Enter author name :");
    scanf("%s",book[i].author);
    printf("Enter price : ");
    scanf("%d",&book[i].price);
}
int max = book[0].price;
int min = book[0].price;
for(int i=1; i<=2; i++){
    if(max>book[i].price){
        max = i;
    }
    else{
        max =0;
    }
    if(min<book[i].price){
        min = i;
    }
    else{
        min = 0;
    }
}
printf("\n");
printf("Max price is of the book %d\n",max+1);
printf("Book title is : %s\n",book[max].title);
printf("Book author is : %s\n",book[max].author);
printf("Price of the book is : %d\n",book[max].price);
printf("\n");
printf("Min price is of the book %d\n",min+1);
printf("Book title is : %s\n",book[min].title);
printf("Book author is : %s\n",book[min].author);
printf("Price of the book is : %d\n",book[min].price);
return 0;
}