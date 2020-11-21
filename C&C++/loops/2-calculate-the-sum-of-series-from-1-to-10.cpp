/*
Code by: - Pratik GT.
Email: - gtsproduction2020@gmail.com
*/
/*Calculate the sum of series from 1 to 10*/

#include<stdio.h>

int main()
{
    int i; //loop variable
    int a = 0; //to store the some

    /*if we start loop from 0 till less than equal to 10
        it will start from 0 till 10
        0+1+2+3+4+5+6+7+8+9+10
    */
    for(i=0;i<=10;i++)
    {
        //keep adding into the value of a
        a = a + i;
    }
    printf("Sum of series from 1 to 10 is = %d", a);
}
