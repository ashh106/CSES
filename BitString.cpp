#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
#define pb push_back
using namespace std;
// ll mod = 1e9 + 7 ;
// Your task is to calculate the number of bit strings of length n.
// For example, if n=3, the correct answer is 8, because the 
// possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.
ll modPow(ll b , ll e){
    ll num = 1;
for(int i = 1 ; i<=e ; i++ ){
   num = (num * b) % mod ;
}
 return num;
};

int main(){
ll n ; cin>>n;
cout<<modPow(2LL , n )<<endl;
return 0 ;
}