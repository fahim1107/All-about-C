#include <stdio.h>
void main ()
{

int day;

    printf("Enter the day number of the week: ");
    scanf("%d", &day);

    int saturday=1, sunday=2, monday=3, tuesday=4, wednessday=5, thursday=6, friday=7;

    if (day==1){
        printf("The day is : Saturday",saturday);
    }
    else if (day==2){
        printf("The day is : Sunday", sunday);
    }
    else if (day==3){
        printf("The day is : Monday", monday);
    }

    else if (day==4){
        printf("The day is : Tuesday", tuesday);
}
    else if (day==5){
        printf("The day is : Wednessday", wednessday);
}
    else if (day==6){
        printf("The day is : Thursday", thursday);

    }else if (day==7) {
        printf("The day is : Friday", friday);
    }


}
























