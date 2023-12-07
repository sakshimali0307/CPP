#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  int iNum[5] = {22, 45, 66, 87,34};

  cout<<"\n value of 201 Element ="<<iNum[0];
  cout<<"\n value of 202 Element ="<<iNum[1];
  cout<<"\n value of 203 Element ="<<iNum[2];
  cout<<"\n value of 204 Element ="<<iNum[3];
  cout<<"\n value of 205 Element ="<<iNum[4];

  getch();

  iNum[3] = 104;

  iNum[4] = iNum[2];

  iNum[1] += 5;

  cout<<"\n\n==========*****************=============\n\n";

  cout<<"\n value of 401 Element ="<<iNum[0];
  cout<<"\n value of 402 Element ="<<iNum[1];
  cout<<"\n value of 403 Element ="<<iNum[2];
  cout<<"\n value of 404 Element ="<<iNum[3];
  cout<<"\n value of 405 Element ="<<iNum[4];

  cout<<"\n\nPress Any Key to Continue...";
  getch();
  return 0;
}
