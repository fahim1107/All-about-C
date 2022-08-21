#include <stdio.h>
void main ()
{


    char letter;

    printf("Enter to check : ");
    scanf("%c", &letter);

    char lowercase='a';
    char uppercase='A';

    if (letter>='A' && letter<='Z'){

        printf("Uppercase!");

    }
    else {
        printf("Lowercase!");
    }





}

