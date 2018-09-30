#include <bits/stdc++.h>
using namespace std;
int countSetBits(int n)
{
    if (n == 0)
        return 0;
    else
        return (1 + countSetBits(n & (n - 1)));
}

int main()
{
    int n = 11;
    int ans = countSetBits(n);
    cout << "The number of set bits in " << n << " are: " << ans << endl;
    return 0;
}