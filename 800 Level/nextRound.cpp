#include<iostream>
using namespace std;
int main()
{
    int n,k, qualified, ni, a[100];
    cin >> n >> k;
    for (int i = 0; i<n;i++)
    {
        cin >> a[i];
        
    }
    for (int i =0; i<n; i++)
    {
        if (a[i]>0 && a[i] >= a[k-1])
        {
            qualified++;
        }
    }
   cout <<qualified;
    return 0;
}