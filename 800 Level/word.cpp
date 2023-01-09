#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string s, newStr;
    int i,upperChar = 0, lowerChar = 0;
    cin >> s;
     for (i = 0; i<s.size();i++)
     {
        if (isupper(s[i]))
        upperChar++;
        else
        lowerChar++;
     }
     if (lowerChar >= upperChar)
     {
        for (i = 0; i<s.size();i++)
     {
        newStr +=  tolower(s[i]);
     }
     }
     else
     {
         for (i = 0; i<s.size();i++)
     {
        newStr += toupper(s[i]);
     }
     }
    cout<< newStr;
    return 0;
}
