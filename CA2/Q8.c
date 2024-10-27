#include<stdio.h>
int main(){
float cost, Tcost, unit;
printf("Enter the units consumed : ");
scanf("%f",&unit);
if(unit<=50){
    cost = unit*0.5;
}
else if(unit>50 && unit<=150){
    cost = 50*0.5 + (unit-50)*0.75;
}
else if(unit>150 && unit<=250){
    cost = 50*0.5 + 100*0.75 + (unit - 150)*1.2;
}
else if(unit>250){
    cost = 50*0.50 + 100*0.75 + 150*1.2 + (unit-250)*1.50;
}
Tcost = cost + cost*0.20;
printf("Total electricity bill is : %.3f",Tcost);
return 0;    
}