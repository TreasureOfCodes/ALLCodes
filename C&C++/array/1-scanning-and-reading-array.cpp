//Pratik GT
/*
    Scanning and Reading array.
*/

#include<stdio.h>

int main()
{
    int a[10];
    int i;

    printf("Enter 10 elements in array = \n");
    for(i=0;i<10;i++)
    {
        printf("> %d > ", i+1);
        scanf("%d",&a[i]);
    }

    printf("\nYour entered array is = \n");
    for(i=0;i<10;i++)
    {
        printf("\n> %d > %d",i+1, a[i]);
    }
    return 0;
}