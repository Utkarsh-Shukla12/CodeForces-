#include<iostream>
using namespace std;
int main()
{
    int n,p,v,t, solved = 0;
    cin>> n;
    for (int i = 0; i< n; i++)
    {
        cin >> p >> v >> t;
        if (2<=(p+v+t))
        {
            solved++;
        }
    }
    cout<<solved;
    return 0;
}