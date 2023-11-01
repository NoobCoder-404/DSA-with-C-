#include <bits/stdc++.h>
using namespace std;

int countStairs(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    if (n == 1 || n == 2)
    {
        return n;
    }

    return countStairs(n - 1) + countStairs(n - 2);
}

int main()
{
    int n = 5;
    int ans = countStairs(n);
    cout << ans << endl;

    return 0;
}