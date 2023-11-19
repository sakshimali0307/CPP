#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i = 0, j = 0, x = 0;

    cout<<"Enter Size For Pattern :";
    cin>>x;

    cout<<"\n\n********** Pattern **********\n\n";

    for(i = 1; i <= x; i++)
    {
        for(j = 1; j <= x; j++)
            {
                if(j == 1 || j == x || i == j)
                {
                    cout<<" * ";
                }
            else
            {
                cout<<"   ";
            }
        }
        cout<<"\n";
    }
    cout<<"\n==================================\n";

    getch();
    return 0;
}
