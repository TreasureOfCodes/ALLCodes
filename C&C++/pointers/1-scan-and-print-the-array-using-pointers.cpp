//Pratik GT
/*
    Scan and print the array using pointers.
*/

#include<stdio.h>

int main()
{
    int a[10];
    int i;
    int *ptr = a;
    for(i=0;i<10;i++)
    {
        printf("> %d > ",i+1);
        scanf("%d", ptr);
        ptr++;
    }

    ptr = a;
    printf("\n Index|Address|Data\n");
    for(i=0;i<10;i++)
    {
        printf("> %d > %d > %d\n", i, ptr, *ptr);
        ptr++;
    }
}
