/*
The Celebrity Problem  : http://surl.li/ndmcn
*/
#include <bits/stdc++.h>
/*
        This is signature of helper function 'knows'.
        You should not implement it, or speculate about its implementation.

        bool knows(int A, int B);
        Function 'knows(A, B)' will returns "true" if the person having
        id 'A' know the person having id 'B' in the party, "false" otherwise.


        bool knows(vector <int> &M, int A, int B, int n){
            if(M[A][B] == 1){
                return true;
            }else{
                return false;
            }
        }
*/

int findCelebrity(int n)
{
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        st.push(i);
    }

    while (st.size() > 1)
    {
        int a = st.top();
        st.pop();

        int b = st.top();
        st.pop();

        if (knows(a, b))
        {
            st.push(b);
        }
        else
        {
            st.push(a);
        }
    }

    int candidate = st.top();

    // row check
    int celebrityCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (knows(candidate, i))
        {
            celebrityCount++;
        }
    }
    if (celebrityCount != 0)
    {
        return -1;
    }

    // column check
    int peopleCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (knows(i, candidate))
        {
            peopleCount++;
        }
    }
    if (peopleCount != n - 1)
    {
        return -1;
    }
    return candidate;
}