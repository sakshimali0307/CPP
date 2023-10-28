#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No = 0;

    cout<<"\n Enter The Number =";
    cin>>No;

    if(No%2 == 0)
    {
            cout<<"\n Given Number is Even";
    }
    else
    {
            cout<<"\n Given Number is Odd";
    }
    getch();
    return 0;
}
