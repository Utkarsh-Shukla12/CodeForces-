#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>> s;
    map<char, int> count;
    for (int i=0;i<s.length();i++)
    {
    count[s[i]];
    }
    if (count.size()%2 == 0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
    return 0;
}