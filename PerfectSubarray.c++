
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        int s = a[i];
        if (floor(sqrt(s)) == ceil(sqrt(s)))
            c++;
        for (int j = i + 1; j < n; j++)
        {
            s += a[j];
            if (floor(sqrt(s)) == ceil(sqrt(s)))
                c++;
        }
    }
    cout << c << endl;

    return 0;
}