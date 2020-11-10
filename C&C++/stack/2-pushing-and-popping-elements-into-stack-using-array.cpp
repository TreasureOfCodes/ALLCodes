//Pratik GT
/*
    Pushing and popping elements into Stack using array.
*/

#include<iostream>

#include<stdlib.h>

using namespace std;

class Stack
{
    public:
        int top = -1;
        int MAX_SIZE = 10;
        int s[10];
        int i, c;

        int start()
        {
            int loop = 0;
            for(i=0;i<=loop;i++)
            {
                loop++;
                cout<<"\n\n1. Insert in stack.\n2. Delete in stack.\n3. Read stack.\n0. Exit program.\nEnter your answer = ";
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
                        stack_ins();
                        break;
                    }
                    case 2:
                    {
                        stack_del();
                        break;
                    }
                    case 3:
                    {
                        stack_read();
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

        int stack_ins()
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
            return 0;
        }

        int stack_del()
        {
            int i;
            if(top == -1)
            {
                cout<<"\nStack is Empty!";
            }
            else
            {
                s[top] = NULL;
                top--;
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
            }
            return 0;
        }

        int stack_read()
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
            return 0;
        }
};

int main()
{
    Stack o;
    o.start();
    return 0;
}
