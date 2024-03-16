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
  ll a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  cout << min(a * x + b * y, min(2 * c * max(x, y), 2 * c * min(x, y) + ((x > y) ? a : b) * abs(x - y))) << endl;
}