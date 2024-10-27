#include<stdio.h>
int main(){
int week_day;
printf("Enter day number : ");
scanf("%d",&week_day);
switch(week_day){
    case 1:
    printf("Monday");
    break;
    case 2:
    printf("Tuesday");
    break;
    case 3:
    printf("Wednesday");
    break;
    case 4:
    printf("Thrusday");
    break;
    case 5:
    printf("Friday");
    break;
    case 6:
    printf("Saturday");
    break;
    case 7:
    printf("Sunday");
    break;
    default:
        printf("Invalid Input");
}
return 0;    
}