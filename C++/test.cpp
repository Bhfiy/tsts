#include <iostream>
using namespace std;

int count = 1;
int sum=1;
void f(int n)
{
    if (count >= n+1)
    {
        return;
    }
    sum=sum*count;
    cout << sum << endl;
    count++;
    f(n);
}
int main()
{
    int n;
    cin>>n;
    f(n);
}