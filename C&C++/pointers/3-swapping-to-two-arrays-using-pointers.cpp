//Pratik GT
/*
    Swapping to two arrays using pointers.
*/

#include<stdio.h>

int main()
{
    int s = 10, i;
    int arr_a[s], arr_b[s];
    int *arr1 = arr_a, *arr2 = arr_b, *end_arr;
    end_arr = &arr_a[s-1];

    printf("\nEnter array 1 = \n");
    for(i=0; i<s; i++)
    {
        printf("> %d > ",i+1);
        scanf("%d", arr1);
        arr1++;
    }
    arr1 = arr_a;

    printf("\nEnter array 2 = \n");
    for(i=0; i<s; i++)
    {
        printf("> %d > ",i+1);
        scanf("%d", arr2);
        arr2++;
    }
    arr2 = arr_b;

    printf("\n\nArray 1 = \n");
    for(i=0;i<s;i++)
    {
        printf("%d " , *arr1);
        arr1++;
    }
    arr1 = arr_a;

    printf("\n\nArray 2 = \n");
    for(i=0;i<s;i++)
    {
        printf("%d " , *arr2);
        arr2++;
    }
    arr2 = arr_b;

    int temp;
    while(arr1 <= end_arr)
    {
        temp = *arr1;
        *arr1 = *arr2;
        *arr2 = temp;

        *arr2++;
        *arr1++;
    }
    arr1 = arr_a;
    arr2 = arr_b;

    printf("\n\nAfter Swap :\nArray 1 = \n");
    for(i=0;i<s;i++)
    {
        printf("%d " , *arr1);
        arr1++;
    }

    printf("\n\nArray 2 = \n");
    for(i=0;i<s;i++)
    {
        printf("%d " , *arr2);
        arr2++;
    }
}
