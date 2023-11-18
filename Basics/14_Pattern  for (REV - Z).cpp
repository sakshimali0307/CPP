#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i = 0, j = 0, x = 0;

    cout<<"\n Enter Size For Pattern :";
    cin>>x;

    cout<<"********** Pattern **********\n";

    for(i = 1; i <= x; i++)
    {
        for(j = 1; j <= x; j++)
        {
            if(i == 1 || i == x || i == j)
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
    cout<<"=================================";

    getch();
    return 0;
}
