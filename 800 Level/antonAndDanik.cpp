#include<iostream>
using namespace std;
int main()
{
    int n, i=0,antonWon=0, danikWon=0;
    string s;
    cin >>n;
    cin >> s;
    while(n--)
    {
        if (s[i] == 'A')
        antonWon++;
        else{
        danikWon++;}

       i++; 
    }
if (antonWon > danikWon)
cout<<"Anton";
else if (antonWon < danikWon)
cout<<"Danik";
else
cout<<"Friendship";
}