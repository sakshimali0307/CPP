#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
 int r = 0, c = 0, x = 0;
 char i = '\0';

 cout<<"\nEnter size for Pattern =>";
 cin>>x;

 cout<<"\n============ pattern =============\n";

 for(r = 1; r <= x; r++)
 {
   for(c = 1, i ='A'; c <= x; c++,i++)
   {
     if(r == 1 || c == 1 || r == x || c == x)
     {
     cout<<"  "<<i;
     }
     else

     cout<<"   ";
   }
   cout<<"\n";
 }
 cout<<"\n===========================\n";

 getch();
 return 0;
}
