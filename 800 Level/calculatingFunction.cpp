#include<iostream>
using namespace std;
int main()
{
    long long n, Sum=0;
    cin>>n;
    if(n%2==0)
    Sum=n/2;
    else Sum= ((n+1)/2)*(-1);
    cout<<Sum;
    return 0;


}