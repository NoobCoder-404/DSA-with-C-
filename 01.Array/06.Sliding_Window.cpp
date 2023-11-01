// maximum 'K' length sub array sum

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    int arr[n] = {4, 5, 6, 3, 1, 4, 8, 5, 7, 6};
    int k = 3;
    int sum = 0, maxSum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    maxSum = sum;

    int i = 0;
    int j = k;

    while (j < n)
    {
        sum -= arr[i];
        sum += arr[j];
        i++;
        j++;
        maxSum = max(sum, maxSum);
    }
    cout << "Maximum " << k << " length sub array sum : " << maxSum << endl;

    return 0;
}