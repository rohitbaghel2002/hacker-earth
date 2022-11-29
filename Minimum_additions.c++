#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
signed main() {
   
    int t;
    cin >> t;
    assert(1 <= t && t <= 10);
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        assert(1 <= n && n <= 5e5);
        int i;
        int arr[n+1];
        int sum = 0;
        for(i=1;i<=n;i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
 
        int add = 1 + sum/(k+1) - n;
        add = max(add, 0LL);
        cout << add << '\n';
    }
    return 0;
}