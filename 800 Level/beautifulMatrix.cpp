#include<iostream>
using namespace std;
int main()
{
    int number;
    for(int i=0;i<5;i++)
    {
     for(int j=0;j<5;i++)
     {
        cin>>number;
        if(number==1) 
        {
            cout<< (abs(i-3) + abs(j-3))<<endl;            
        }
     }   
    }
    return 0;
}