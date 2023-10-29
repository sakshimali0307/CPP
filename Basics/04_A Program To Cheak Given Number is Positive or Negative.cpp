#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
        int Num = 0;

        cout<<"\n Enter An Integer Number =";
        cin>>Num;

        if(Num > 0)
        {
            cout<<"Given Number is Positive";
        }
        else
        {
            cout<<"\n Given Number is Negative";
        }

        getch();
        return 0;
}
