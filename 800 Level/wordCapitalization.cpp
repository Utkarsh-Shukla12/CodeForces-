#include<iostream>
#include<cctype>


using namespace std;
int main()
{
    string s, capitalized;
    cin>>s;
    capitalized = towupper(s[0]);
    cout<< capitalized;
    for (int i=1; i < s.length(); i++)
    {
        //capitalized.append(s[i]);
        cout<<s[i];
    }
    //cout << capitalized;
    return 0;
}