#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="shosb";
    int hasha[256]={0};
    char c ;
    cin>>c;

    map<int , int> mpp;

    for(int i = 0; i < 5; i++)
    {
        mpp[s[i]]+= 1;
    }

        cout<<mpp[c]<< " ";
    
    
    return 0;

}