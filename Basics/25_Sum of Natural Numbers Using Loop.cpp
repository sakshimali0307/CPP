#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i = 0, n = 0, sum = 0;

    cout<<"\n Enter A Posivite Integer :";
    cin>>n;

    for(i=1; i<=n; i++)
    {
       sum += i;
    }
    cout<<"\n sum ="<<sum;

    getch();
    return 0;
}
