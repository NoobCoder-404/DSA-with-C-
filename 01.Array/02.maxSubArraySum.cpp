#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 3, 5, 7, 9};
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j <= i; j++)
        {
            sum += arr[j];
            maxSum = max(sum, maxSum);
        }
        }
    cout << "Maximum Sub Array Sum : " << maxSum << endl;

    return 0;
}