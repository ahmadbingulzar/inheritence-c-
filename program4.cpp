#include <iostream>
using namespace std;
class stack
{
protected:
    enum {MAX = 3};
    int st[MAX];
    int top;

public:
    stack()
    {
        top = -1;
    }
    void push(int var)
    {
        st[++top] = var;
    }
    int pop()
    {
        return st[top--];
    }
};
class stack2 : public stack
{

public:
    void push(int var)
    {
        if (top >= MAX - 1)
        {
            cout << "Error :stack is full";
            exit(1);
            stack::push(var);
        }
    }
    int pop()
    {
        if (top < 0)
        {
            cout << "Error :stack is empty" << endl;
            exit(1);
            return stack::pop();
        }
    }
};
int main()
{
    stack2 s1;
    s1.push(11);
    s1.push(22);
    s1.push(33);

    cout << endl
         << s1.pop();
    cout << endl
         << s1.pop();
    cout << endl
         << s1.pop();
    cout << endl
         << s1.pop();
    cout << endl;
    return 0;
}