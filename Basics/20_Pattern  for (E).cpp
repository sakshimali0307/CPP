#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i = 0, j = 0, x = 0;

    cout<<"\n Enter Size for Pattern :";
    cin>>x;

    cout<<"\n\n ********** Patttern ************\n\n";

    for(i = 1; i <= x; i++)
    {
        for(j = 1; j <= x; j++)
        {
            if(i == 1 || i == x || j == 1 || (i == x/2 + 1) && (j <= x/2 + 1))
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
    cout<<"\n======================================\n";

    getch();
    return 0;
}
