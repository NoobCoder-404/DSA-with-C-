// maximum sub array sum with prefix sum
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int pre[n + 1];
    int arr[n] = {1, 3, 5, 7, 9};

    pre[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + arr[i - 1];
    }

    for (int i = 0; i <= n; i++)
    {
        cout << pre[i] << " ";
    }

    cout << endl;

    // index 2 to 3 sum
    int i = 2;
    int j = 3;
    int arraySum = pre[j + 1] - pre[i];
    cout << "sum array index " << i << " to " << j << " is : " << arraySum << endl;

    return 0;
}