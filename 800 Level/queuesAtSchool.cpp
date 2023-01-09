#include<iostream>
using namespace std;
int main()
{
    int n,t;
    string childrenQ;
    cin >> n >> t;
    cin >> childrenQ; 
    while(t--)
    {
        for( int j=0; j<n; j++)
        {
        if (childrenQ[j]=='B'&& childrenQ[j+1]=='G')
        {
        childrenQ[j] = 'G';
        childrenQ[j+1] = 'B';
        ++j;
        }
        }
    }
    cout<<childrenQ;
    return 0;
}