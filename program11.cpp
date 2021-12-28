#include<iostream>
using namespace std;
class A{
    public:
            void print()
            {
                cout<<"I am function"<<endl;
            }

};
class B:public A
{

};
class C:public A
{

};
class D:public B,public C
{

};
int main()
{
    D objD;
    //objD.print();    //print is ambigious
    return 0;
}