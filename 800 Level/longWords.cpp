#include<iostream>
using namespace std;
int main()
{
    int m;
    string n;
    cin >> m;
    for (int i = 0; i < m; i++ )
    {
    cin >> n;
    int sLen = n.length();
    if (sLen > 10)
    {
        cout<<n[0]<<(sLen -2) <<n[sLen -1] << "\n";
    }
    else {
        cout<< n << "\n";
    }
    }
}