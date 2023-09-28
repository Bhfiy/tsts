#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="shosb";
    int hasha[256]={0};
    char c ;
    cin>>c;

    for(int i = 0; i < 5; i++)
    {
        hasha[s[i]]+= 1;
    }

        cout<<hasha[c]<< " ";
    
    
    return 0;

}