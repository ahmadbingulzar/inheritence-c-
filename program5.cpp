#include <iostream>
using namespace std;
enum posneg
{
    pos,
    neg
};
class Distance
{
protected:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0)
    {
    }
    Distance(int ft, float in) : feet(ft), inches(in)
    {
    }
    void getdist()
    {
        cout << "Enter feet :";
        cin >> feet;
        cout << endl;
        cout << "Enter inches :";
        cin >> inches;
    }
    void showdist() const
    {
        cout << feet << "\'-" << inches << '\"';
    }
};
class Dist_sign : public Distance
{
private:
    posneg sign;

public:
    Dist_sign() : Distance()
    {
        sign = pos;
    }
    Dist_sign(int ft, float in, posneg sg = pos) : Distance(ft, in)
    {
        sign = sg;
    }
    void getdist()
    {
        Distance::getdist();
        char ch;
        cout << "Enter sign (+ or -): ";
        cin >> ch;
        sign = (ch == '+') ? pos : neg;
    }
    void showdist() const
    {
        cout << ((sign == pos) ? "(+)" : "(-)");
        Distance ::showdist();
    }
};
int main()
{
    Dist_sign alpha;
    alpha.getdist();
    Dist_sign beta(11, 6.25);
    Dist_sign gamma(100, 5.5, neg);
    cout << "alpha = ";
    alpha.showdist();
    cout << endl;
    cout << "beta = ";
    beta.showdist();
    cout << endl;
    cout << "Gamma = ";
    gamma.showdist();
    cout << endl;
    return 0;
}