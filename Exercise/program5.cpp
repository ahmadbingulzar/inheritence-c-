#include<iostream>
using namespace std;
class employee

{
private:
    char name[LEN];
    unsigned long number;

public:
    void get_data()
    {
        cout << "Enter last name = ";
        cin >> name;
        cout << endl;
        cout << "Enter employee number = ";
        cin >> number;
        cout << endl;
    }
    void show_data() const
    {
        cout << "Employee Name is = " << name << endl;
        cout << "Employee number is = " << number << endl;
    }
};
class employee_2{

private:
        double compensation;
        enum period{hourly,weekly,monthly};

        



};