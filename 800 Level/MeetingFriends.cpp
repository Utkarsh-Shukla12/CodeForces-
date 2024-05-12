//723A The New Year: Meeting Friends
#include <bits/stdc++.h>
using namespace std;

void sorting()
{
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    int total = (arr[1]-arr[0]) + (arr[2]-arr[1]);
    cout<<total;
}


int main()
{
 int x1,x2,x3, maxi,mini; 
 cin>>x1>>x2>>x3;  
maxi = max(x1,x2);
maxi =max(x3,maxi);
mini = min(x1,x2);
mini = min(x3,mini);
cout<<maxi-mini;
}