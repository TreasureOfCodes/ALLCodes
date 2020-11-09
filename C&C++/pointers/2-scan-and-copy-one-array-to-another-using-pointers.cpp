//Pratik GT
/*
    Scan and copy one array to another using pointers.
*/

#include<stdio.h>

int main()
{
    int s = 10, i;
    int arr_a[s], arr_b[s];
    int *arr1 = arr_a, *arr2 = arr_b, *end_arr;
    end_arr = &arr_a[s-1];

    for(i=0; i<s; i++)
    {
        printf("> %d > ",i+1);
        scanf("%d", arr1);
        arr1++;
    }

    arr1 = arr_a;

    for(i=0;i<s;i++)
    {
        printf("%d " , *arr1);
        arr1++;
    }

    arr1 = arr_a;

    while(arr1 <= end_arr)
    {
        *arr2 = *arr1;
        *arr2++;
        *arr1++;
    }

    arr2 = arr_b;

    printf("\n");
    for(i=0;i<s;i++)
    {
        printf("%d " , *arr2);
        arr2++;
    }
}
