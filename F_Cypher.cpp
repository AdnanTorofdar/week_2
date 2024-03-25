#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
void me()
{
  int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
      int p;
      cin >> p;
      cin.ignore();
      cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
      string c;
      c = s[i];
      int size = c.length();
      int a = 0, b = 0;
      for (int i = 0; i < size; i++)
      {
        if (c[i] == 'D')
        {
          a++;
        }
        else
        {
          b++;
        }
      }
      if ((v[i] + a - b) < 0 && ((v[i] + a - b) % 10) != 0)
      {
        cout << (((v[i] + a - b) % 10) + 10) << " ";
      }
      else
        cout << ((v[i] + a - b) % 10) << " ";
    }
    cout << endl;
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