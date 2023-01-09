#include<iostream>
using namespace std;
int main()
{
    int n,i,nei = 0,groups =0;
    cin>>n;
    while(n--)
    {
        cin>> i;
        
            if (nei!=i){
                groups++;
            }
        nei = i;
    }
    //cout << groups;
    return 0 ;

}