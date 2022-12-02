#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, steps = 0;
    cin >> n;
    int i, a[n], b[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        cin >> b[i];
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            k = a[i];
            a[i] = a[i + 1];
            a[i + 1] = k;
            k = b[i];
            b[i] = b[i + 1];
            b[i + 1] = k;
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        while (a[n - 1] != a[i])
        {
            if (a[i] <= 0)
            {
                cout << "-1" << endl;
                ;
                exit(0);
            }
            if (a[n - 1] < a[i])
            {
                a[i] = a[i] - b[i];
                steps++;
            }
            if (a[n - 1] > a[i])
            {
                a[n - 1] = a[n - 1] - b[n - 1];
                steps++;
            }
        }
    }
    cout << steps;
    return 0;
}