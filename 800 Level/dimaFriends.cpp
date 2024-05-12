#include<iostream>
using namespace std;
int main()
{
    int n,number,total=0,ans=0;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>number;
        total+=number;
    }
    for (int i=1;i<=5;i++)
    {
        if((total+i)%(n+1)!=1) ans++;
    }
    cout<<ans;
}