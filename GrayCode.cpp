#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define nl endl

const int MOD = 1000000007;
const int INF = 1e9;

void solve(int n ) {
    int p = pow(2 , n); // 4
    for(int i = 0 ; i < p ; i++){//4
        string s =  bitset<16>(i).to_string();
        string a = s.substr(16-n);
        // cout<<a<<nl;
        string temp = a; // 00 , 01 , 10 , 11 -> 00 01 11 10
        for(int j = 1 ; j<temp.size() ; j++){
           if(a[j]==a[j-1]) temp[j]='0';
           else temp[j] = '1';
        }
        cout<<temp<<nl;
    }

}

int main() {
    fastio; 
    int t = 1;
    // cin >> t;
    while (t--) {
        int n ; cin>>n  ;
        solve(n);
    }
    return 0;
}
// string toBinary(int d) {
//     if (d == 0) return "0";
//     string res = "";
//     if (d == 1) return "1";
//     res = toBinary(d / 2) + (d % 2 == 0 ? "0" : "1");
//     return res;
// }

