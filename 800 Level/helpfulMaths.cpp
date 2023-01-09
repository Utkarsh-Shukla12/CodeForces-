#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i,c1=0,c2=0,c3=0;
    if (s.length() > 1)
    {
    for (i=0; i<s.length();i++)
    {
        if (s[i] == '1')
        {
            c1++;
        }
         if (s[i] == '2')
        {
            c2++;
        } 
        if (s[i]== '3')
        {
            c3++;
        }
    }
    }
    else
    {
        cout<< s;
    }
    //cout<< c1 << "+" << c2 << "+"<< c3 << endl;
    if (c1>0){
       while(c1--)
        {
             if (c1>0)
                {
            cout << "1+";
                }
                else if (c1 ==0){
                    cout << "1";
                    if (c2>0||c3>0)
                    cout<<"+";
                }            
        }}
        if (c2>0){
        while(c2--)
        {
             if (c2>0)
                {
            cout << "2+";
                }
                else if (c2 ==0){
                    cout << "2";
                    if (c3>0)
                    cout<<"+";
                }
        }}
        if (c3 > 0 ){
            
        while(c3--)
        {    
            if (c3>0)
                {
            cout << "3+";
                }
                else if (c3 ==0){
                    cout << "3";
                }
        }}
       //cout<< c1 << " " << c2 << " "<< c3 << endl; 
    return 0;
}
