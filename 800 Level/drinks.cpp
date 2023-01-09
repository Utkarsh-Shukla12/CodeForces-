#include<iostream>
using namespace std;
int main()
{
    int n,i;
    double p1,percentage=0;
    cin >> n;
    i=n;
    while(n--)
    {
        cin>>p1;
        percentage+=p1;
    }
cout<<(percentage/i);
return 0;
}