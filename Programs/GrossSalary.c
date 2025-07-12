#include<stdio.h>
int main(){
    int BasicSalary;
    float DA,HRA,GrossSalary;
    printf("Enter the Basic Salary : ");
    scanf("%d",&BasicSalary);

    DA = 0.5*BasicSalary;
    HRA = 0.4*BasicSalary;
    GrossSalary = BasicSalary + DA + HRA;

    printf("Gross Salary for your given Basic Salary is %f",GrossSalary);
    
    return 0;
}