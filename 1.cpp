#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  while (true)
  {
    ll n, x, c = 0;
    cin >> n >> x;
    if (n == 0 && x == 0)
      break;
    for (ll i = 1; i <= n; i++)
      for (ll j = i + 1; j <= n; j++)
        for (ll k = j + 1; k <= n; k++)
          c += (i + j + k == x);
    cout << c << endl;
  }
}