#include<iostream>
using namespace std;
int main()
{
    int t,current,previous=0,maxLength=0, currentLen=1;
    cin>>t;
    while(t--)
    {
        cin>> current;
        if(current>previous && previous!=0)
        {
            currentLen++;
            previous=current;
        }
        else
        {
            previous=current;
            maxLength = max(currentLen, maxLength);
            currentLen = 1;
            
        }
    } 
    cout<<maxLength;
}