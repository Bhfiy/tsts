#include <iostream>
using namespace std;

void reverse(int arr[],int size){
    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int num[6]= {1,2,3,4,5,6};


    // reverse(num,6);
    // printArray(num, 6);

    cout<<(6^3);

}