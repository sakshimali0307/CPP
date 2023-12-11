#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  int r = 0, c = 0, x = 0;

  cout<<"\nEnter Size for pattern = ";
  cin>>x;

  cout<<"\n ========== Pattern ===========\n";

  for(r = 1; r <= x; r++)
  {
    for(c = 1; c <= x; c++)
    {
      if(r >= c)
      {
      cout<<" Q ";
      }
      else

      cout<<"   ";
    }
    cout<<"\n";
  }
  cout<<"\n==================================\n";

  getch();
  return 0;
}
