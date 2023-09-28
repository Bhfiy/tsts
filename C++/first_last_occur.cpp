#include <bits/stdc++.h> 
using namespace std;
// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {


//     int first = lower_bound(arr.begin(),arr.end()+n,k) - arr.begin();
//     int last =upper_bound(arr.begin(),arr.end()+n,k) - arr.begin();
//     last--;
    
//     if (arr[first]==k && (last>=0 && arr[last]==k) ){
//     pair<int , int> ans = {first, last};
//     return ans;
//     }
   
//     else{
//          pair<int , int> ans = {-1, -1};
//     return ans;
//     }
// }

int main(){
    int arr[8] = {0 ,0 ,1 ,1 ,2 ,2 ,2, 2};
    int n=8;
    int k=2;

    int first = lower_bound(arr,arr+n,k) - arr;
    int last =upper_bound(arr,arr+n,k) - arr;
    last--;

     if (arr[first]==k && (last>=0 && arr[last]==k) ){
    int ans[2] = {first, last};
    return ans[] ;
    }
   
    else{
        int ans[2] = {first, last};
    
    }
    cout<<first;
    cout<<endl;
    cout<<last;

}