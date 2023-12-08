/*program for pattern -
A
B C
D E F
G H I J
K L M N O*/

#include<iostream>
#include<conio.h>
using namespace std;

 int main()
 {
   int i,j;
   char ch = 'A';

   cout<<"\n===============**************====================\n";

   for(i = 1; i <= 5; i++)
   {
     for(j = 1; j <= i; j++)
     {
       cout<<"  "<<ch;
       ch++;
     }
     cout<<"\n";
   }
   cout<<"\n===============***************=====================\n";

 }
