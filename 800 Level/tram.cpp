#include<iostream>
using namespace std;
int main()
{
    int n,ai=0,bi=0, currentCapacity=0, maxCapacity = 0;
    cin >> n;
    while(n--)
    {
        cin >> ai >> bi;
        currentCapacity +=(bi-ai);
        maxCapacity = max(maxCapacity, currentCapacity);
    }
    cout<< maxCapacity;
    return 0;
}