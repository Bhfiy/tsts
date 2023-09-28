#include <bits/stdc++.h>
using namespace std;

void sS(int arr[], int n){
    int mini;
    for (int i = 0; i < n-1; i++)
    {
        mini=i;
        int j;
        for( int j=i+1; j <= n-1; j++){
            if (arr[j]<arr[mini]) mini = j;
        }
        swap(arr[i],arr[mini]);
    }
    
}

int main(){

    int arr[5]={5,4,3,2,1};
    sS(arr, 5);
    for(int i = 0 ; i<5 ;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}