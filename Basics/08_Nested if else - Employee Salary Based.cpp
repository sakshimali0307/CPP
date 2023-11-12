#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
 int sal =0,Is_stud =0;

 cout<<"\nEnter Your Salary =";
 cin>>sal;

 cout<<"\nEnter 1 if you are a student =";
 cin>>Is_stud;

 if(sal <= 0)
 {
  if(Is_stud == 0)
  {
   cout<<"\ncandidate is student";
  }
  else
  {
   cout<<"\ncandidate is Fresher";
  }
 }
else

{
 if(sal > 50000)
{
 cout<<"\ncandidate is an Expert Employee";
}
 else
 {
  cout<<"\ncandidate is an Begineer Employee";
 }
}

cout<<"\nThanks!!!...";

getch();
return 0;
}
