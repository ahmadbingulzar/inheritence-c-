#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
            string school;
            string degree;
    public:
            void get_edu()
            {
                cout<<"Enter name of school or university = ";
                cin>>school;
                cout<<"Enter highest degree earned = "<<endl
                    <<"(Hight school,Bachelor's,Master's,PHD)"<<endl;
                    cin>>degree;
            }
            void show_data()const{
                cout<<"School or university = "<<school<<endl;
                cout<<"Highest degree earned = "<<degree<<endl;
            }
};
class employee
{
    private:
            string name;
            unsigned long number;
    public:
            void get_data()
            {
                cout<<"Enter last name = ";
                cin>>name;
                cout<<"Enter number = ";
                cin>>number;
            }
            void show_data()
            {
                cout<<"Name = "<<name<<endl;
                cout<<"Number = "<<number;
            }
};
class managar{

private:
        string title;
        double dues;
        employee emp;
        Student stu;
public: 
        void get_data()
        {
            emp.get_data();
            cout<<"Enter title = ";
            cin>>title;
            cout<<endl;
            cout<<"Enter golf club dues = ";
            cin>>dues;
            stu.get_edu();
        }
        void show_data()
        {
            emp.show_data();
            cout<<"Title = "<<title<<endl;
            cout<<"Golf club dues is = "<<dues<<endl;
            stu.show_data();
        }
};
class scientist{
    private:
            int publications;
            employee emp;
            Student stu;
    public:
            void get_data()
            {
                emp.get_data();
                cout<<"Enter number of publications = ";
                cin>>publications;
                cout<<endl;
                stu.get_edu();
            }
            void show_data()
            {
                emp.show_data();
                cout<<"Number of publications = "<<publications<<endl;
                stu.show_data();
            }
};
class laborer
{
    private:
            employee emp;
    public:
            void get_data()
            {
                emp.get_data();
            }
            void show_data(){
                emp.show_data();
            }
};
int main()
{
    managar m1;
    scientist s1,s2;
    laborer l1;

    cout<<endl;
    cout<<"Enter data for managar 1"<<endl;
    m1.get_data();
cout<<endl;
    cout<<"Enter data for scientist 1"<<endl;
    s1.get_data();
cout<<endl;
    cout<<"Enter data for scientist 2"<<endl;
    s2.get_data();
cout<<endl;
    cout<<"Enter data for laborer 1"<<endl;
    l1.get_data();
cout<<endl;
    cout<<"Showing data for managar 1"<<endl;
    m1.show_data();

cout<<endl;
cout<<"Showing data for scientist 1"<<endl;
s1.show_data();
cout<<endl;

cout<<"Showing data for scientist 2"<<endl;
s2.show_data();

cout<<endl;
cout<<"Showing data for laborer 1"<<endl;
l1.show_data();
cout<<endl;
return 0;
}