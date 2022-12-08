#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        int rem, count = 0;
        for (long long i = l; i <= r; i++)
        {
            rem = i % 10;
            if (rem == 2 || rem == 3 || rem == 9)
            {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}