#include<iostream>
#include <string>
using namespace std;
class sales{

private:
        float record[4];
public:
        void get_data()
        {
            for(int i=1;i<=3;i++)
            { 
            cout<<"Enter sales for "<<i<<"month = ";
            cin>>record[i];
            }

        }
        void show_data()
        {
            for(int i=1;i<=3;i++)
            {
                cout<<"sales for "<<i<<"month = "<<record[i]<<endl;
            }
        }
};
class Publications{

private:
        string title;
        float price;

public:
        void get_data()
        {
            cout<<"Enter Title = ";
            cin>>title;
            cout<<endl;
            cout<<"Enter price = ";
            cin>>price;
            cout<<endl;
        }
        void show_data()
        {
            cout<<"Title is = "<<title<<endl;
            cout<<"Price is = "<<price<<endl;
        }
};
class Book:public Publications,public sales
{
    private:
            int page_count;
    public:
            void get_data()
            {
                Publications::get_data();
                sales::get_data();
                cout<<"Enter count = ";
                cin>>page_count;
                cout<<endl;
            }
            void show_data()
            {
                Publications::show_data();
                sales::show_data();
                cout<<"This is page count = "<<page_count<<endl;
            }
};
class Tape:public Publications,public sales
{
    private:
            float playing_time;
    public:
            void get_data()
            {
                cout<<"Enter playing time = ";
                cin>>playing_time;
                cout<<endl;
            }
            void show_data()
            {
                cout<<"This is playing time = "<<playing_time<<endl;
            }
};
int main()
{
    Book obj_1;
    Tape obj_2;

    cout<<"object of book data"<<endl;
    obj_1.get_data();
    cout<<"object of tape data"<<endl;
    obj_2.get_data();

    cout<<"Showing all data"<<endl;
    obj_1.show_data();
    obj_2.show_data();
    return 0;
}