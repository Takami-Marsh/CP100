#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll n, c = 0;
  cin >> n;
  for (ll i = 1; i <= n; i += 2)
  {
    ll t = 0;
    for (ll j = 1; j <= i; j++)
      t += (i % j == 0);
    c += (t == 8);
  }
  cout << c << endl;
}