#include<iostream>
using namespace std;
int main()
{
    int n,left,right, leftSum=0,rightSum=0,t=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>left>>right;
        leftSum+=left;
        rightSum+=right;
    }
    if(leftSum>rightSum)
    {
        t+=n-leftSum;
        if(n-rightSum> rightSum) t+=rightSum;
        else t+=n-rightSum;
        cout<<t<<endl;
    }
    else if (leftSum ==0 && rightSum==0) cout<<0;
    else
    {
        t+=n-rightSum;
        if(n-leftSum> leftSum) t+=leftSum;
        else t+=n-leftSum;
        cout<<t<<endl;
    }
}