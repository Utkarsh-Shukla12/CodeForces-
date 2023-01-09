#include<iostream>
using namespace std;
int main()
{
int i,k,n,w, amount = 0;
cin>> k >> n >>w;
for (i=1; i<=w;i++)
{
    amount += i*k;
}
if (amount < n||amount == n){
    cout<<0;
}
else{
    cout<<(amount - n);
}
return 0;
}