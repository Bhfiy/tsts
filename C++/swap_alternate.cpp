#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6]={1,3,4,5,2, 9};

    for (int i=0;i<6;){
        if (i+1<6){
            swap(a[i],a[i+1]);
            i=i+2;
        }
    }
    for (int i=0;i<6;i++){
    cout<<a[i]<<" ";
        
    }
    return 0;
}