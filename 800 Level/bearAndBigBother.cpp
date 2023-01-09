#include<iostream>
using namespace std;
int main()
{
    int a,b,years = 0;
    bool found = true;
    cin >> a >> b;
    while(found)
    {
        years++;
        a = 3*a;
        b = 2*b;
        if (a>b){
            found = false;
        }
    }
    cout<<years;
return 0;
}