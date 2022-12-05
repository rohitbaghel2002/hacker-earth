#include <bits/stdc++.h>
#define LL long long int
#define M 1000000007
#define endl "\n"
#define eps 0.00000001
LL pow(LL a, LL b, LL m)
{
    a %= m;
    LL x = 1, y = a;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            x = (x * y);
            if (x > m)
                x %= m;
        }
        y = (y * y);
        if (y > m)
            y %= m;
        b /= 2;
    }
    return x % m;
}
LL gcd(LL a, LL b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
LL gen(LL start, LL end)
{
    LL diff = end - start;
    LL temp = rand() % start;
    return temp + diff;
}
using namespace std;
int a[1001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    assert(n <= 1000);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        assert(a[i] >= 1 && a[i] <= 1000000000);
    }
    int i = 1;
    while (i <= n)
    {
        if (a[i] % 2 == 0)
        {
            int st = i, et = i;
            while (i <= n && a[i] % 2 == 0)
            {
                et = i;
                ++i;
            }
            reverse(a + st, a + et + 1);
        }
        else
        {
            ++i;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
}
