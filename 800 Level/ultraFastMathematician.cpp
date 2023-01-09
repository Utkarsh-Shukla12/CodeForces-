//61A  Ultra-Fast Mathematician
#include<iostream>
using namespace std;
int main()
{
    string s,s1, output;
    cin>>s>>s1;
    for (int i =0; i<s.size();i++)
    {
        if (s[i]==s1[i]){
            output+="0";
        }
        else{
            output+="1";
        }
    }
    cout<<output;
}