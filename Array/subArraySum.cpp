#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 3, 5, 7, 9};

    // Time complexity = n^3;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
                cout << arr[k] << " ";
            }
            cout << "= " << sum;
            cout << endl;
        }
    }

    return 0;
}