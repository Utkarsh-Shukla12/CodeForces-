#include<iostream>
using namespace std;
int main()
{
    string s;
    int largest = 0, best = 1; 
    cin>>s;
    for (int i=0; i< s.size();i++)
    {
        if (s[i]==s[i+1]){
            best++;
        }
        else{
            largest = max(largest, best);
            best =1;
        }
    }
    if (largest>=7)
    cout<<"YES";
    else
    cout<<"NO";
//cout<<largest;
    return 0;
}