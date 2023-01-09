#include<iostream>
using namespace std;
int main()
{
    string breLang, birLand;
    bool isSame = true;
    cin >> breLang;
    cin >> birLand;
    int totalWords = breLang.size(),i=0;
    while(totalWords-- )
    {
        //cout <<"breLang[i]" << breLang[i]<< endl;
        //cout<<"birLand[birLand.length()-(i+1)]"<< birLand[birLand.length()-(i+1)]<<endl;
        if (breLang[i] != birLand[birLand.length()-(i+1)])
        {
            isSame = false;
            break;
            
        }
        i++;
    }
    if (isSame == true)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
    
}