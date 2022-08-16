#include <stdio.h>
int main ()

{


    int id, salaryPerhour, workingHour;
    float totalSalary;




    printf("Enter the ID : ");
    scanf("%d",&id);



    printf("Working hour : ");
    scanf("%d",&workingHour);


    printf("Salary : ");
    scanf("%d",&salaryPerhour);

        totalSalary= salaryPerhour * workingHour;


       printf("Your ID : %d",id) ;
    printf("\nTotal Salary : %.2f ",totalSalary);











}
