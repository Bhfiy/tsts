#include <iostream>
using namespace std;

int count=0;

void f(int n)
{
    if (count >=n)
    {
        return;
    }  
    cout << "Coding Ninjas" << endl;
    count++;
    f(n);
}
int main()
{
    int n;
    cin>>n;
    f(n);
}