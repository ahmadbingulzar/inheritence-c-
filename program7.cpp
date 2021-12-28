#include <iostream>
using namespace std;
class A{
private:
        int privdataA;
protected:
        int prodataA;
public:
        int pubdataA;
};
class B :public A
{
    public:
            void funct()
            {
                int a;
                //a=privdataA; //not accessible
                a=prodataA;
                a=pubdataA;
            }
};
class C :private A
{
    public:
        void funct()
        {
                int a;
                //a=privdataA; //not accessible
                a=prodataA;
                a=pubdataA;
        }
};
int main()
{
    int a ;
    B objB;
    a=objB.privdataA;//ERROR
    a=objB.prodataA;//ERROR
    a=objB.pubdataA;

    C objC;
    a=objC.privdataA;//ERROR
    a=objC.prodataA;//ERROR
    a=objC.pubdataA;//ERROR(A IS PRIVATE TO C)
    
}