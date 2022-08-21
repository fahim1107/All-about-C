#include <stdio.h>
void main ()
{


int month;


    printf("Enter the days of month: ");
    scanf("%d",&month);

    int january, february, march, april, may, june, july, auguest, september, october, november, december;

    //January, March, May, July, Auguest, October, December - these months are 31 days.

    if(month==31){
    printf("The months are:\n January\n March\n May\n July\n Auguest\n October\n December");
    }

    //April, June, September, November - these months are 30 days.

    else if(month==30){
        printf(" The months are: \n April\n June\n September\n November");
    }

    // February - The only month is 28days.
    else if (month==28){

        printf("The month is:\n February");
    }
    else {
        printf("Invalid numbers!");
    }



























}
