#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int MAX_N = 5e5 + 14, B = 25;
int a[MAX_N];

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        ll ans = 0;
        for (int i = 0; i < B; ++i) {
            int l = 0;
            while (l < n && (a[l] >> i & 1))
                ++l;
            int r = n;
            while (r > l && (a[r - 1] >> i & 1))
                --r;
            ans += (l == n ? n * ll(n + 1) / 2 - 1 : (l + 1) * ll(n - r + 1) - 1) * (1 << i);
        }
        cout << ans << '\n';
    }
}