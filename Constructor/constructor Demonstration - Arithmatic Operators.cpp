using namespace std;
#include<iostream>
#include<conio.h>

class calculator
{
        public:
                int No1,No2,Res;

                void Add()
                {
                        cout<<"\n Inside PUBLIC Add() Function Of Our class..."<<endl;
                        Res = No1 + No2;
                }
                calculator()
                {
                        No1 = 0;
                        No2 = 0;
                        Res = 0;

                        cout<<"\n Inside Default Constructor Of Our Calculator Class...";
                }
                calculator(int N1, int N2)
                {
                        No1 = N1;
                        No2 = N2;
                        Res = 0;

                        cout<<"\n Inside Parameterized Constructor Of Our Calculator Class...";

                }
                calculator(calculator &Ref)
                {
                        No1 = Ref.No1;
                        No2 = Ref.No2;
                        Res = Ref.Res;

                       cout<<"\n Inside Copy Constructor Of Our Calculator Class...";
                }

                ~calculator()
                {
                        cout<<"\n Inside Destructor Of Our Calculator Class..."<<Res;
                }
};

int main()
{
                calculator obj1;

                cout<<"\n Enter 2 Numbers For Addition =";
                cin>>obj1.No1>>obj1.No2;

                getch();

                obj1.Add();
                cout<<"\n Addition in Given Object is ="<<obj1.Res;

                cout<<"\n Back to Main()...";
                getch();

                calculator   obj2(15,7);

                obj2.Add();
                cout<<"\n Addition in Given 2nd Object is ="<<obj2.Res;

                getch();
                calculator Myobj(obj2);

                cout<<"\n\n Value of Res for New Object => "<<Myobj.Res;

                getch();
                return 0;
}
