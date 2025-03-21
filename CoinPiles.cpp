#include<bits/stdc++.h>
#define ll long long 
using namespace std;
// coin piles - a and b 
// 1. either remove one coin from the left pile 
// and two coins from the right pile
// 2. two coins from the left pile and one coin from the right pile.
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
ll t ; cin>>t ;
while(t--){
    ll a ; ll b ; cin>>a>>b;
    bool flag = max(a, b) <= 2 * min(a, b);
    if((a+b)%3 ==0  && flag ) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
    return 0;
}