#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=n-1;i>=1;i--){
    int maxi=i;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1])
       { int temp =arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;}
        }
    }
}

int main(){
    int arr[5]={5,23,13,32,8};

    bubble_sort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}