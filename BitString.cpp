#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod = 1e9 + 7 ;
// Your task is to calculate the number of bit strings of length n.
// For example, if n=3, the correct answer is 8, because the 
// possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.
ll modPow(ll b , ll e){
ll ans = 1;
while (e){
    if(e & 1LL) ans = (ans * b) % mod;
    b = (b * b)% mod;
    e >>= 1LL;
}
return ans;
}

int main(){
ll n ; cin>>n;
modPow(2LL , n );
return 0 ;
}