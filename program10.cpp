#include<iostream>
#include<string>
using namespace std;
class Type{

private:
		string dimensions;
		string grade;
public:
		Type():dimensions("N/A"),grade("N/A")
		{

		}
		Type(string d1,string gr):dimensions(d1),grade(gr)
		{

		}
		void gettype()
		{
			cout<<"Enter nominal dimensions (2x4 etc.) = ";
			cin>>dimensions;
			cout<<endl;
			cout<<"Enter grade (rough,const,etc ) = ";
			cin>>grade; 
		}
		void showtype()const
		{
			cout<<"Dimensions = "<<dimensions<<endl;
			cout<<"Grade = "<<grade<<endl;
		}
};
class Distance
{
	private:
			int feet;
			float inches;
	public:
			Distance():feet(0),inches(0)
			{

			}
			Distance(int ft,float in):feet(ft),inches(in)
			{

			}
			void get_dist()
			{
				cout<<"Enter feet = ";
				cin>>feet;
				cout<<"Enter inches = ";
				cin>>inches;
			}
			void show_dist()
			{
				cout<<"Feet = "<<feet<<endl
					<<"Inches = "<<inches<<endl;
			}
};
class lubmber:public Type,public Distance
{
	private:
			int quantity;
			double price;
	public:	
			lubmber():Type(),Distance(),quantity(0),price(0.0)
			{

			}
			lubmber(string d1,string gr,int ft,float in,int qu,float prc):Type(d1,gr),Distance(ft,in),quantity(qu),price(prc)
			{

			}
			void get_lumber()
			{
				Type::gettype();
				Distance::get_dist();
				cout<<"Enter quantity ";
				cin>>quantity;
				cout<<endl;
				cout<<"Enter price per piece: ";
				cin>>price;
			}
			void show_lumber()
			{
				Type::showtype();
				cout<<"Length:"<<endl;
				Distance::show_dist();
				cout<<"Price for "<<quantity<<"pieces: $"<<price*quantity;
			}
};
int main()
{
	lubmber siding;
	cout<<"siding data: "<<endl;
	siding.get_lumber();

	lubmber studs("2x4","const",8,0.0,200,4.45F);
	cout<<"Siding"; siding.show_lumber();
    cout<<endl;
	cout<<"Studs";  studs.show_lumber();
    cout<<endl;
	return 0;
}