#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
        int Num1, Num2;

        cout<<"\n Enter 2 Integers =";
        cin>>Num1>>Num2;

        if(Num1 > Num2)
        {
                cout<<"\n Number "<<Num1<<" is Maximum";
        }
        else
        {
                cout<<"\n Number "<<Num2<<" is Maximum";
        }

        getch();
        return 0;
}
