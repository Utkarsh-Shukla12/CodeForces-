#include<iostream>
using namespace std;
void printString(string s)
{
char ch;
    
    for(int i=0; i<s.size();i++)
    {
        if(tolower(s[i]))ch = toupper(s[i]);
        else ch = tolower(s[i]);
        cout<<ch;
        
    }
}
int main()
{
    string s;
    cin>>s;
    bool isCapsLockOn=true;
    char current;
    for(int i=1;i<s.size();i++)
    {
        if(!toupper(s[i]))
        {
            isCapsLockOn=false;
        }
    }
    if (isCapsLockOn)
    {
        printString(s);
    } else cout<<s;
    
}