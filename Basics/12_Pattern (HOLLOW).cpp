#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
 int i = 0, j = 0, r = 0, c = 0;

 cout<<"\nEnter Row Value For Pattern =";
 cin>>r;
 cout<<"\nEnter Column Value For Pattern =";
 cin>>c;

 cout<<"\n=============Pattern==============\n";

 for(i = 1; i <= r; i++)
 {
   for(j = 1; j<= c; j++)
   {
    if(i == 1 || j == 1 || i == r || j == c)
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
