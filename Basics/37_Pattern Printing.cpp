/*write a pattern program -
2
2 4
2 4 6
2 4 6 8
2 4 6 8 10*/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  int r = 0, c = 0, x = 0, i = 0;

    cout<<"\nEnter Size for Pattern =";
    cin>>x;

    cout<<"\n========== Pattern ============\n";

  for(r = 1; r <= x; r++)
  {
    for(c = 1,i = 2; c <= x; c++,i++)
    {
    if(r >= c)
    {
         cout<<"  "<<i;
        i++;
    }
    else

        cout<<"   ";
    }
        cout<<"\n";
  }

   cout<<"\n=================================\n";

  getch();
  return 0;
}
