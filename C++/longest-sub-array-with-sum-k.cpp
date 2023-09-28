#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> a = {1, 2, 3, 1, 1, 1, 1};
    int k = 3;

    map<int, int> ans;
    int len = 0, maxlen = 0;

        int sum = 0;
    for (int i = 0; i < a.size(); i++)
    {

        sum += a[i];

        if (sum == k)
        {
            maxlen = i + 1;
        }
        int rem = sum - k;
        if (ans.find(rem) != ans.end())
        {
            int len = i - ans[rem];
            maxlen = max(maxlen, len);
        }
        ans[sum] = i;
    }

    return maxlen;
}