#include<iostream>
using namespace std;
int main()
{
    string p;
    bool execute=false;
    cin>>p;

    for(int i=0;i<p.size();i++)
    {
        if(p[i]=='H'|| p[i]=='Q' || p[i]=='9')
        {
            execute =true;
            break;
        }
}
if (execute) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}