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
    string com; cin >> com;
    stack<ll> s;
    vector<ll> pr(n);
    ll curr = 0;
    for(int i=0; i<n; i++){
        if(com[i]=='1'){
            s.push(i);
    }   
        else if(com[i]=='2'){
            if(s.empty()){
                pr[i] = 1;
            }
            else{
                pr[s.top()]++;
                s.pop();
            }
        }
        else{
            pr[i]++;
        }
    }
    vector<ll> ans;
    for(int i=0; i<n; i++){
        if(!pr[i]){
            ans.push_back(i+1);
        }
    }
    cout << ans.size() << "\n";
    if(ans.size()){
        for(auto x : ans){
            cout << x << " ";
        }
        cout << "\n";
        return;
    }
    cout << "\n";
};

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t; w = t;
    while (w--)
        solve();
    return 0;
}