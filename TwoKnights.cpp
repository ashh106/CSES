#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
    ll n ; cin>>n;
    ll c[n+ 1];
    ll a[n+ 1];
    for(int i = 1 ; i<= n ; i++){
    ll v = i*i;
    c[i] = v*(v-1)/2;
    a[i] = 4*(i-1)*(i-2);
    }
    for(int i = 1 ; i<= n ; i++){
     cout<<c[i]-a[i]<<endl;
    }
    return 0;
}

