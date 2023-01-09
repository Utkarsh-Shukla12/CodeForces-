#include<iostream>
using namespace std;
int main()
{
    int n, output = 0;
    string operation;
    cin >> n;
    while(n--)
    {
        cin >> operation;
        if (operation[1] == '+')
        {
           output++;
        }
        else{
            output--;
        }
    }
    cout << output;
    return 0;
}