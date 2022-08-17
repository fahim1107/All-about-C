#include<stdio.h>
int main ()
{

    int  result;



    printf("Enter Your Result : ");
    scanf("%d", &result);

    if (result > 80)
    {

        printf("A++++");




    }
    else if (result >70){
         printf("You got A");

    } else if(result >60){

        printf("You got B");
    }
    else if (result <40){

        printf("Failed!");

    }







}
