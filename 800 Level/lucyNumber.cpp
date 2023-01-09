#include<iostream>
using namespace std;
int main()
{
    long long n;
    int luckyNum = 0;
    cin>>n;
    while (n!=0)
    {
        if(n%10 ==4 || n%10==7)
        {
            luckyNum++;
        }
        n/=10;
    }
    
   if (luckyNum == 4|| luckyNum ==7)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}