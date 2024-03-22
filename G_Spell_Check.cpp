#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
void me()
{
    int n, i, t = 0, q = 0, m = 0, u = 0, r = 0;

    cin >> n;
    char a[n + 1];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n != 5)
    {
        cout << "NO"
             << "\n";
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] == 'T')
            {
                t++;
            }
            else if (a[i] == 'i')
            {
                q++;
            }
            else if (a[i] == 'm')
            {
                m++;
            }
            else if (a[i] == 'u')
            {
                u++;
            }
            else if (a[i] == 'r')
            {
                r++;
            }
        }
        if ((t == 1) && (q == 1) && (m == 1) && (u == 1) && (r == 1) && (t + q + m + u + r == 5))
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}
    int main()
    {
        fast;
        ll t = 1;
        cin >> t;
        while (t--)
            me();
        return 0;
    }