#include<iostream>
using namespace std;
int main()
{
    int n, pi,qi,availRooms=0;
    cin>>n;
    while(n--)
    {
        cin>>pi>>qi;
        if ((qi-pi)>=2)
        {
            availRooms++;
        }
    }
    cout<<availRooms;
    return 0;
}