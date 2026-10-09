#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fol(i,n) for(ll i=0; i<n; i++)
#define foi(i,n) for(int i=0; i<n; i++)
#define Fol(i,k,n) for(ll i=k;k<n? i<n:i>n;k<n?i++:i--)
#define Foi(i,k,n) for(int i=k;k<n? i<n:i>n;k<n?i++:i--)
#define fori(x,v) for(auto x : v)
#define deb(x) cout << #x << '=' << x << endl
#define F first
#define S second
#define pb push_back
#define pob pop_back
#define all(x) x.begin(), x.end()
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(s) scanf("%s",s)
#define pi(x) printf("%d",x)
#define pl(x) printf("%lld",x)
#define ps(s) printf("%s",s)

int t = 1, w;

ll cost(ll a, ll b, ll c, ll target) {
    ll sum = a + b + c;

    if (sum >= target)
        return 0;

    if (a == b && b == c)
        return LLONG_MAX;

    if (a > b || b > c)
        return target - sum;

    ll d = min(b - a + 1, c - b + 1);

    return target - sum + 2 * d;
}

bool possible(vector<vector<ll>>& v, ll k, ll target) {
    ll need = 0;

    fol(i, v.size()) {
        ll x = cost(v[i][0], v[i][1], v[i][2], target);

        if (x == LLONG_MAX)
            return false;

        if (x > k - need)
            return false;

        need += x;
    }

    return true;
}

void solve() {
    ll n;
    cin >> n;

    ll k;
    cin >> k;

    vector<vector<ll>> v(n);

    ll sum = LLONG_MAX;

    fol(i, n) {
        ll a, b, c;
        cin >> a >> b >> c;

        v[i] = {a, b, c};

        sum = min(sum, a + b + c);
    }

    ll lo = sum;
    ll hi = sum + k;
    ll ans = sum;

    while (lo <= hi) {
        ll mid = lo + (hi - lo) / 2;

        if (possible(v, k, mid)) {
            ans = mid;
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    w = t;

    while (w--)
        solve();

    return 0;
}