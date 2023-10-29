#include <bits/stdc++.h>
using namespace std;

void countingAsc(int n)
{
    if (n == 0)
    {
        return;
    }

    countingAsc(n - 1);
    cout << n << " ";
}

void countingDsc(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    countingDsc(n - 1);
}

int main()
{
    int n = 5;

    countingDsc(n);
    cout << endl;
    countingAsc(n);

    return 0;
}