#include<stdio.h>
void main ()
{
    int arr[10];

    for(int i=0;i<10;i++){

    scanf("%d",&arr[i]); //NO!
    }
    for(int i=0;i<10;i++){ //OK!

   printf("%d",arr[i]);
    }
}
