#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string s1,s2;
    int output =0;
    cin >> s1;
    cin >> s2;
    
    for (int i = 0; i< s1.length();i++)
    {
        if (towlower(s1[i]) > towlower(s2[i]))
        {
            output = 1;
            break;
        }
        else if (towlower(s1[i])< towlower(s2[i]))
        {
            output = -1;
            break;
            
        }
        
    }
    cout<< output;
    return 0;
}