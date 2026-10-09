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

int t=1,w;

void solve(){
    ll n; cin >> n;
    vector<ll> a(n), b(n);

    fol(i,n) cin >> a[i];
    fol(i,n) cin >> b[i];

    ll ans = 0;

    fol(i,n){
        if(a[i] == b[i])
            ans += 2;
        else
            ans++;
    }

    fol(i,n-1){
        if(a[i+1] == b[i])
            ans += 2;
        else
            ans++;
    }

    ll curr = 0, best = 0;

    Fol(i,n-2,-1){
        if(a[i] == b[i+1])
            curr++;
        if(a[i] == b[i])
            curr--;

        best = max(best,curr);
    }

    ans += best;

    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> t; w = t;

    while(w--)
        solve();

    return 0;
}