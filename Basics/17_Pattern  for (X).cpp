#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i = 0, j = 0, x = 0;

    cout<<"\nEnter Size For Pattern : ";
    cin>>x;

    cout<<"\n\n********** Pattern **********\n\n";

    for(i = 1; i <= x; i++)
    {
        for(j = 1; j <= x; j++)
        {
            if(i == j || i + j == x + 1)
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

    cout<<"===============================";

    getch();
    return 0;
}
