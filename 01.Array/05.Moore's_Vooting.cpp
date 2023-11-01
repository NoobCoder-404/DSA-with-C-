// majority element more than n/2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {2, 2, 2, 3, 3};

    int ansIndex = 0;
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[ansIndex] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            ansIndex = i;
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[ansIndex])
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        cout << "Majority Element : " << arr[ansIndex] << endl;
    }

    return 0;
}