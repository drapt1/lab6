#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите строку ";
    string s;
    getline(cin, s);
        for (string::iterator i = s.begin(); i != s.end(); ++i)
        if (ispunct(*i))
        {
            *i = ' ';
        }
    sort(s.begin(), s.end());
    cout << s;
    return 0;
}
