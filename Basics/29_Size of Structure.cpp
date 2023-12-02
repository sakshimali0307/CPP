#include<iostream>
#include<conio.h>
using namespace std;

struct stud
{
    char b;
    char *Name[2];
    int s;
};

int main()
{
        struct stud s;

        cout<<"\nsize of structure object :"<<sizeof(s);

        getch();
        return 0;

}
