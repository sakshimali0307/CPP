/*Write a write program for pattern -
15
20 25
30 35 40
45 50 55 60
65 70 75 80 85 */

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  int r = 0, c =0, x =0, i = 0;

  cout<<"\nEnter size for pattern =";
  cin>>x;

  cout<<"\n=========== Pattern =============\n";

  for(r = 1, i = 15; r <= x; r++)
  {
    for(c = 1; c <= x; c++)
    {
      if(r >= c)
      {
        cout<<"  "<<i;
        i = i + 5;
      }
      else

      cout<<"   ";
    }
    cout<<"\n";
  }
  cout<<"\n===================================\n";

  getch();
  return 0;
}
