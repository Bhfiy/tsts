#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5]={1,2,3,4,1};
    int hasha[13]={0};
    int n ;
    cin>>n;
    map<int,int > mpp;


    for(int i = 0; i < 5; i++)
    {
        mpp[a[i]]+= 1;
    }

        cout<<mpp[n]<< " ";
    
    
    return 0;

}