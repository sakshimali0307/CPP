#include<iostream>
#include<conio.h>
using namespace std;

struct stud
{
    char Nm[8];
    char city [12];
    int R_No;
    float per;
};

int main()
{
   struct stud std;

   cout<<"\n Size of structure object :"<<sizeof(std);

   getch();
   return 0;
}
