#include <stdio.h>
 void main ()
 {


     char ch;
     printf("Enter the character :");
     scanf ("%c", &ch);



     switch (ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
{


 case 1:
    printf("Vowel");
    break;

 case 0:
    printf("Consonent");
    break;

 default:
    printf("Valid Number");



}



 }







