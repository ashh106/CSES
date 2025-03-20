#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define pb push_back
using namespace std;
// ll fact (ll n ){
//     if (n == 0) return 1;
//     if (n == 1) return 1;
//     ll ans = n*fact(n-1);
// return ans;
// }
ll fun( ll n ){
    if (n < 0) 
        return -1;
    int count = 0 ;
   for(ll i = 5 ; n/i>=1 ; i*=5){
        count += n/i;
     // cout<<i<<" "<<count<<endl;
   }
   return count;
}
int main(){
ll n ;
cin>>n;
// for( ll i= 0 ; i<n ; i++)    cout<<i<<" "<<fact(i)<<endl;
// cout<<100/5<<endl;
cout<<fun(n)<<endl;
return 0 ;
}