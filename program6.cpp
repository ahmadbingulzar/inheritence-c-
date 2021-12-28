#include <iostream>
using namespace std;
const int LEN = 80;
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
class manager : public employee
{

private:
    char title[LEN];
    double dues;

public:
    void get_data()
    {
        employee::get_data();
        cout << "Enter employee title = ";
        cin >> title;
        cout << endl;
        cout << "Enter employee dues = ";
        cin >> dues;
        cout << endl;
    }
    void show_data()
    {
        employee::show_data();
        cout << "Employee title is = " << title << endl;
        cout << "Employee dues is = " << dues << endl;
    }
};
class scientist : public employee
{
private:
    int publications;

public:
    void get_data()
    {
        employee::get_data();
        cout << "Enter employee publications = ";
        cin >> publications;
        cout << endl;
    }
    void show_data()
    {
        employee::show_data();
        cout << "Employee publications is = " << publications << endl;
    }
};
class laborer : public employee
{
};
int main()
{
    manager managar_1, managar_2;
    scientist scientist_1;
    laborer laborer_1;

    cout << "Enter data for managar 1";
    managar_1.get_data();

    cout << "Enter data for managar 2";
    managar_2.get_data();

    cout << "Enter data for scientist 1";
    scientist_1.get_data();

    cout << "Enter data for laborer 1";
    laborer_1.get_data();

    //showing data for several employees
    cout << "Showing manager 1 data" << endl;
    managar_1.show_data();
    cout << endl
         << endl;
    cout << "Showing managar 2 data" << endl;
    managar_2.show_data();
    cout << endl
         << endl;

    cout << "Showing data for scientist 1" << endl;
    scientist_1.show_data();
    cout << endl
         << endl;
    cout << "Showing data for laborer 1";
    laborer_1.show_data();
}