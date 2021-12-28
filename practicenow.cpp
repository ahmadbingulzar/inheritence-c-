#include <iostream>
#include <cstring>
using namespace std;

string str_change(string user_string)
{
    int length = user_string.size();
    int last = length - 1;
    string value;
    value[0] = user_string[last];
    int second_last = length - 2;
    user_string[last] = user_string[second_last];
    user_string[second_last] = value[0];
    return user_string;
}
int main()
{
    string result;
    result = str_change("ali");
    cout << "this is result = " << result << endl;
}