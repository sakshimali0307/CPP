#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
private:
    int real, imag;
public:
    complex(int r,int i)
    {
        real =r;
        imag =i;
    }
    complex()
    {
        real =0;
        imag =0;
    }
    void print()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    ///operator overloading syntax

      complex operator +(complex c)
    {
        complex temp;
        temp.real =real+c.real;
        temp.imag =imag+c.imag;
        return temp;
    }
};
int main()
{
    complex c1(5,4);
    complex c2(2,5);
    complex c3(1,1);
    complex c4;

    c4=c1+c2+c3;
    c4.print();

    return 0;
}
