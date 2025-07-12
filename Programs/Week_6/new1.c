#include<stdio.h>
int main(){
    int unit;
    float cost, Tcost;
    printf("Enter No. of units consumed : ");
    scanf("%d",&unit);
    if(unit<=50){
        cost = unit*0.50;
    }
    else if(unit>50 && unit<=150){
        cost = unit*0.75;
    }
    else if(unit>150 && unit<= 250){
        cost = unit*1.20;
    }
    else if(unit>250){
        cost = unit*1.50;
    }
    Tcost = cost + 0.20*cost;

    printf("Total cost is %.3f",Tcost);
    return 0;
}
