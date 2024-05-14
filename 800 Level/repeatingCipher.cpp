//1095A Repeating Cipher

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0,i=0;
    cin>>n;
    string s,output;
    cin>>s;
    while(m<n)
    {    
        output+=s[m];              
        i++;
        m+=i;
    }
    cout<<output<<endl;
}
