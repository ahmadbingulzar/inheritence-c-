#include<iostream>
#include<cstring>
using namespace std;

class Person
{
	char* name;
	int age;
public:
	Person()
	{
		this->name = new char;
		*(this->name) = 0;
		this->age = 0;

	}
	Person(char *name, int age) : age(age)
    {
        cout<<"hello"<<endl;
        this->name = new char;
       for(int i=0;name<='\0';i++)
       {
           this->name[i]=name[i];
       }
    }
	Person(const Person &p)
	{
		this->name = new char;
		*(this->name) = *p.name;
		age = p.age;
	}
	void setName(char *name)
	{
		*(this->name) = *name;
	}
	void setAge(int b)
	{
		age = b;
	}
	void getName()
	{
		cout << "This is name of person = " << *name << endl;
	}
	int getAge()
	{
		return age;
	}
	void display()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;

	}
	~Person()
	{
		delete name;
	}
};

class Student
{
	double cgpa;
	char* rollNo;
public:
	Student()
	{
		this->cgpa = 0;
		this->rollNo = new char;
		*(this->rollNo) = 0;

	}
	Student(const Student &s)
	{
		this->cgpa = s.cgpa;
		this->rollNo = new char;
		*this->rollNo = *s.rollNo;
	}
	void setCGPA(double cgpa)
	{
		this->cgpa = cgpa;
	}
	void setRoll(char *rollNo)
	{
		*(this->rollNo) = *rollNo;
	}
	double getCGPA()
	{
		return cgpa;
	}
	char* getRoll()
	{
		return rollNo;
	}
	void display()
	{
		cout << "CGPA: " << cgpa << endl;
		cout << "Roll No: " << rollNo << endl;
	}
};


int main()
{
	cout << "Creating objects..." << endl << endl;
	Person newPerson("ahmad", 27);
	
	// Student newStudent;
	// newStudent.setCGPA(3.06);
	// newStudent.setRoll("L1F20BSSE0291");
	// cout << "Objects created!" << endl << endl;
	// cout << "Displaying objects' state..." << endl << endl;
	// newPerson.display();
	// cout <<"student cgpa"<< newStudent.getCGPA() << endl;
	// cout << newStudent.getRoll() << endl;
	newPerson.display();
	return 0;
}