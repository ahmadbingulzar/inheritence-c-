#include <iostream>
#include <string>
using namespace std;
int solution(string S)
{
    int count_mark = 0;
    int index;
    int lenght = S.length();
    for (int i = 0; i <= lenght; i++)
    {
        if (S[i] == '?')
        {
            count_mark++;
            continue;
        }
        else

            break;
    }
if(count_mark==lenght)
{
    cout<<"largest fragment is = 1"<<endl;
}
    for (int i = 0; i <= lenght; i++)
    {
        if (S[i] == '?')
        {
            S[i] = 'b';
            if (S[i + 1] == '?')
            {
                S[i + 1] = 'a';
            }
        }
    }
    cout << "This is final string = " << S << endl;
    int count_a = 0;
    int count_b = 0;
    for (int i = 0; i <= lenght; i++)
    {
        if (S[i] == 'a' || S[i] == 'b')
        {
            if (S[i] == 'a')
            {
                count_b = 0;
                count_a++;
                continue;
            }
            else if (S[i] == 'b')
            {
                count_a = 0;
                count_b++;
                continue;
            }
        }

        if (count_a > count_b)
        {
            cout << "Largest fragment after is = " << count_a << endl;
        }
        else if (count_b > count_a)
        {
            cout << "Largest fragment after  is = " << count_b << endl;
        }
    }
}
int main()
{
    string S = "???abb?";
    solution(S);
}
