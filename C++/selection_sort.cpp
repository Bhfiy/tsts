#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for (int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if (arr[j]<arr[mini])mini=j;
        }
        int temp = arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;

    }
}

int main(){
    int arr[5]={5,23,13,32,8};

    selection_sort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}