#include<iostream>
using namespace std;
int main()
{
 string x;
 cin>>x;

 for(auto& digit: x)
 {
    if (digit> '4') digit = '9' - digit +'0';
 }
if (x[0]=='0') x[0]='9';
cout<<x<<endl;
return 0;
}