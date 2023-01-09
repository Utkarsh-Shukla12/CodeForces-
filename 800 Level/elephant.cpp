#include<iostream>
using namespace std;
int main()
{
    int x, steps=0; 
    cin >>x;
    while(x>0)
    {
        if (x >= 5)
        {
            x-=5; 
            steps++;
        }
        if (x >= 4 && x < 5)
        {
            x-=4; 
            steps++;
        }
        if (x >=3 && x < 4)
        {
            x-=3; 
            steps++;
        }
        if (x >=2 && x < 3)
        {
            x-=2; 
            steps++;
        }
        if (x == 1 && x <2 )
        {
            x-=1; 
            steps++;
        }

    }
    cout<<steps;
    return 0;
}