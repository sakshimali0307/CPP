#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int Month = 0;

    cout<<"\n Enter Month Number =";
    cin>>Month;

switch(Month)
{
    case 1:
        cout<<"\nJanuary";
        break;

    case 2:
        cout<<"\nFebruary";
        break;

     case 3:
        cout<<"\nMarch";
        break;

     case 4:
        cout<<"\nApril";
        break;

     case 5:
        cout<<"\nMay";
        break;

     case 6:
        cout<<"\nJune";
        break;

     case 7:
        cout<<"\nJuly";
        break;

     case 8:
        cout<<"\nAugust";
        break;

     case 9:
        cout<<"\nSeptamber";
        break;

     case 10:
        cout<<"\nOctomber";
        break;

     case 11:
        cout<<"\nNovember";
        break;

     case 12:
        cout<<"\nDecember";
        break;

      default:
        cout<<"\nInvalid Month";
        break;
}
     getch();
     return 0;

}
