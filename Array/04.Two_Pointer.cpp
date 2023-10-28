#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {3, 1, 5, 2, 9};
    int target = 8;
    int i, j;
    int count = 0;
    i = 0;
    j = n - 1;

    sort(arr, arr + n);

    while (i < j)
    {

        if (arr[i] + arr[j] == target)
        {
            count++;
            cout << "True" << endl;
            break;
        }
        else if (arr[i] + arr[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    if (count == 0)
    {
        cout << "False" << endl;
    }

    return 0;
}