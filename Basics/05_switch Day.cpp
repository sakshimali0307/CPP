#include<iostream>
#include<conio.h>
using namespace std;

        int main()
{
        int Day = 0;

        cout<<"Enter Day Number (1-7) to View Day Text =";
        cin>>Day;


    switch(Day)
    {
        case 1:
                cout<<"Monday";
                break;

        case 2:
                cout<<"Tuesday";
                break;

        case 3:
                cout<<"Wednesday";
                break;

        case 4:
                cout<<"Thursday";
                break;

        case 5:
                cout<<"Friday";
                break;

        case 6:
                cout<<"Saturday";
                break;

        case 7:
                cout<<"Sunday";
                break;

        default:
                cout<<"Invalid Day";
    }
    getch();
    return 0;
}

