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
    vector<ll> lov(n);
    fol(i, n) cin >> lov[i];
    vector<ll> sc(n-4);
    map<ll, ll> m;
    for(int i=0; i<n-4; i++){
        sc[i] = lov[i]+lov[i+2]-lov[i+4];
        m[sc[i]]++;
    }
    ll ans = 0;
    for(int i=0; i<n-4; i++){
        ll curr = m[sc[i]];
        if(i<n-6 && sc[i]==sc[i+2]) curr--;
        if(i<n-8 && sc[i]==sc[i+4]) curr--;
        if(i>1 && sc[i-2]==sc[i]) curr--;
        if(i>3 && sc[i-4] == sc[i]) curr--;

        ans += curr-1;
    }
    cout << ans/2 << "\n";

};

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t; w = t;
    while (w--)
        solve();
    return 0;
}