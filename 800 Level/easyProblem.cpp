#include<iostream>
using namespace std;
int main()
{ 
    int n, i;
    string difficulty="EASY";
    cin >>  n;
    while(n--)
    {
        cin>> i;
        if(i==1)
        {
        difficulty = "HARD";
        break;
        }
    }
cout<<difficulty;
return 0;
}