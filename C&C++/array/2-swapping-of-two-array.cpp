//Pratik GT
/*
    Swapping of two array.
*/

#include<stdio.h>

int main()
{
    int a[10];
    int b[10];
    int i, c;

    printf("Enter 10 elements in 1st array = \n");
    for(i=0;i<10;i++)
    {
        printf("> %d > ", i+1);
        scanf("%d",&a[i]);
    }

    printf("\nEnter 10 elements in 2nd array = \n");
    for(i=0;i<10;i++)
    {
        printf("> %d > ", i+1);
        scanf("%d",&b[i]);
    }

    printf("\n\nBefore Swap\nYour 1st array is = \n");
    for(i=0;i<10;i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n\nYour 2nd array is = \n");
    for(i=0;i<10;i++)
    {
        printf("%d ", b[i]);
    }

    for(i=0;i<10;i++)
    {
        c = a[i];
        a[i] = b[i];
        b[i] = c;
    }

    printf("\n\nAfter Swap\nYour 1st array is = \n");
    for(i=0;i<10;i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n\nYour 2nd array is = \n");
    for(i=0;i<10;i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
