#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for(ll i = a; i < b; i++)

const ll MOD = 1000000007;
const ll INF = 1e9;

void solve(string n) {
    vector<ll>v(26 , 0);
    for (char c : n) v[c - 'A']++;
ll a;
ll ctr = 0;
ll odd = 0;
    for(ll i = 0 ; i < v.size() ; i++)
{
    // if(v[i]>0){
    //     cout<<char(i+'A')<<"->"<<v[i]<<endl;
    // }
    // ll a;
    
    if(v[i]%2 !=0 ){
        ctr++;
         a = i;
         odd = 1;
    }
}
    if(ctr>1){
        cout<<"NO SOLUTION"<<endl;
    }
    else{  
        // ip - AAAACACBA
        // op - AACABACAA
        string f;
        ll flag = 0;
        for(ll i = 0 ; i < v.size() ; i++){
        if(v[i]%2==0){
            ll j = 0 ;
            while(j<v[i]/2){
                f.pb(char(i + 'A'));
                j++;
                flag++;
            } 
        }
        if(v[i]%2!=0 ){
            ll  k = 0 ;
            while(k<v[i]/2){
                f.pb(char(i + 'A'));
                k++;
                flag++;
            }
        }
        }
        cout<<f;
        if(odd) cout<<char(a+'A');
        reverse(all(f));
        cout<<f;
    }
}

int main() {
    fastio;
    ll t = 1;
    // cin >> t;
    while (t--) {
        string n ; cin>>n;
        solve(n);
    }
    return 0;
}