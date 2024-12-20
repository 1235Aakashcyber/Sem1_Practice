#include<stdio.h>
struct manager{
    int id;
    char name[50];
    char department[50];
    int salary;
    struct address{
        char building_name[30];
        int flat;
        char city[20];
    }add;
}details;
int main(){
printf("Enter the manager name : ");
scanf("%s",details.name);
printf("Enter the manager id : ");
scanf("%d",&details.id);
printf("Enter the manager department : ");
scanf("%s",details.department);
printf("Enter the manager address \n");
printf("Building name : ");
scanf("%s",details.add.building_name);
printf("Flat number : ");
scanf("%d",&details.add.flat);
printf("City : ");
scanf("%s",details.add.city);

printf("\nName : %s\n",details.name);
printf("ID : %d\n",details.id);
printf("Department : %s\n",details.department);
printf("Address : %s building, flat number %d, %s\n",details.add.building_name,details.add.flat,details.add.city);

return 0;
}