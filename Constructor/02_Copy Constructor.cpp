#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
    int id;

    public:
        void init (int x)
        {
            id =x;
        }
        void display()
        {
            cout<<endl<<"ID="<<id;
        }
};

int main()
{
    sample obj1;
    obj1.init(50);
    obj1.display();
    sample obj2(obj1);
    obj2.display();
    return 0;
}
