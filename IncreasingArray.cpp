#include <bits/stdc++.h>
#define ar(i, j , n) for(ll i = j ; i < n ; i++)
#define ll long long
using namespace std ;
int main (){
    // given : 
    ll n ; cin>>n;
    ll a[n];
    // each elementy is atlest as large as the previous one
    // make it increasing 
    // mininmum operation required to make it increasing
    ll count = 0;
    ar(i , 0 , n ){
        cin>>a[i]; 
    }
    ar(i , 0 , n-1){
          if ( a[i+1]<a[i] ){
            count += a[i]-a[i+1];  
            a[i+1] += a[i]-a[i+1];
        }
    }
    cout<<count<<endl;
    return 0;
}