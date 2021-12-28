#include <iostream>
using namespace std;
class Triangle
{
    double base;
    double height;

public:
    Triangle(double base_user, double height_user) : base(base_user), height(height_user)
    {
    }
    double area(Triangle obj_1)
    {
        double area;
        area = 0.5 * obj_1.base * obj_1.height;
        return area;
    }
};
int main()
{
    Triangle t1(5, 5);
    double result = t1.area(t1);
    cout << "I am area of the triangle = " << result;
    return 0;
}