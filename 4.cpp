#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<ld> vd;
typedef vector<vd> vvd;
typedef vector<string> vs;

#define rep(i, n) for (ll i = 0; i < n; i++)
const ll INF = 1 << 29;

int main()
{
  ll n, m, score = 0;
  cin >> n >> m;
  vvl a(n, vl(m));
  rep(i, n) rep(j, m) cin >> a[i][j];
  for (ll i = 0; i < m; i++)
    for (ll j = i + 1; j < m; j++)
    {
      ll t = 0;
      for (ll k = 0; k < n; k++)
        t += max(a[k][i], a[k][j]);
      score = max(score, t);
    }
  cout << score << endl;
}