//Pratik GT
/*
    Pushing elements into Stack using array.
*/

#include<iostream>

#include<stdlib.h>

using namespace std;

int main()
{
    int top = -1;
    int MAX_SIZE = 10;
    int s[10];
    int i, c;
    int loop = 0;
    for(i=0;i<=loop;i++)
    {
        loop++;
        cout<<"\n\n1. Insert in stack.\n2. Read stack.\n0. Exit program.\nEnter your answer = ";
        cin>>c;
        switch(c)
        {
            case 0:
            {
                exit(0);
                break;
            }
            case 1:
            {
                int element, i;
                if(top == MAX_SIZE-1)
                {
                    cout<<"\nStack is Full!";
                }
                else
                {
                    cout<<"Enter the element you want to add = ";
                    cin>>element;
                    top++;
                    s[top] = element;
                    cout<<"\nYour stack = ";
                    for(i=top;i>=0;i--)
                    {
                        cout<<"\n"<<"> "<<i+1<<" > "<<s[i];
                    }
                }
                break;
            }
            case 2:
            {
                if(top == -1)
                {
                    cout<<"\nStack is Empty!";
                }
                else
                {
                    cout<<"\nYour stack = ";
                    for(i=top;i>=0;i--)
                    {
                        cout<<"\n"<<"> "<<i+1<<" > "<<s[i];
                    }
                }
                break;
            }
            default:
            {
                cout<<"Invalid option selected.";
            }
        }
    }
    return 0;
}
