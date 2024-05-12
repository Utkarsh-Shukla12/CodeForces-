#include<iostream>
using namespace std;
int main()
{
    int t,a,b,n;
    cin>>t;
    while (t--)
    {
       int operation=0,sum=0;
       cin>>a>>b>>n;
            while(sum<=n)
            {if(a>b){
                b+=a;
                sum=b;
                operation++;
            }
            else{
                a += b;
                sum = a;
                operation++;
            }
            }
            cout<<operation<<endl;
    }
}