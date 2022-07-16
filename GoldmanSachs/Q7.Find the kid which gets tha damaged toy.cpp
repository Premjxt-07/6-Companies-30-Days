#include <bits/stdc++.h>
using namespace std;

int Position_last(int n, int m, int k)
{
    if (m <= n - k + 1)
        return m + k - 1;
    m = m - (n - k + 1);
    return (m % n == 0) ? n : (m % n);
}

int main()
{
    int n = 4;
    int m = 7;
    int k = 2;
    cout << Position_last(n, m, k);
    return 0;
}