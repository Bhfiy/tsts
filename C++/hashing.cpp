#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5]={1,2,3,4,1};
    int hasha[13]={0};
    int n ;
    cin>>n;

    for(int i = 0; i < 5; i++)
    {
        hasha[a[i]]+= 1;
    }
    // for (int i = 0; i < 5; i++)
    // {
    // }
        cout<<hasha[n]<< " ";
    
    
    return 0;

}