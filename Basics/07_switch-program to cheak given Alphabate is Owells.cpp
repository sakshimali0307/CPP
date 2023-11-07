#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  char ch ='\0';

  cout<<"\n Enter a character is Owelles =";
  cin>>ch;

  switch(ch)
  {
   case'A':
   case'a':
   case'E':
   case'e':
   case'I':
   case'i':
   case'O':
   case'o':
   case'U':
   case'u':

       cout<<"\nGiven character is owelles";
       break;

   default:
       cout<<"\nGien character is Alphabate";
       break;
  }
  cout<<"\n\nThanks!!!...";

  getch();
  return 0;
}
