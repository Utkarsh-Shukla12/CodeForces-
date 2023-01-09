#include<iostream>
using namespace std;
int main()
{
    int n,h,ai,width=0;
    cin>>n>>h;
    while(n--)
    {
        cin >>ai;
        if (ai > h)
        width+=2;
        else
        width++;
    }
    cout<<width;
    return 0;

}