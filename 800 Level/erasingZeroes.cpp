//1303A Erasing Zeroes

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        int zeros=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1' && s[i+1]=='0')
            {
                for(int j=i+1; j<s.size();j++)
                if(s[j]=='1')
                {
                    zeros+=j-i;
                    zeros--;
                    break;
                }
            }

        }
         cout<<zeros<<endl;
    }
   
}
