#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    
    for (int i = 0; i <= size; i++)
    {
        if (key == arr[i])
        {
            return true;
        }
    }
    return false;
}


int main()
{

    int array[10] = {1, 2, 3, 5, 61, 12, 213, 4324, 43, 21};
    cout<<"Enter"<<endl ;
    int n;
    cin >> n;

    bool search2 = search(array, 10, n);
    if(search2){
    cout<<n<<" Exists";
        
    }
    else
    cout<<n<<" Doesnt Exists";

}