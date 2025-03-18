#include<bits/stdc++.h>
#define ll unsigned long long 
using namespace std;
int main (){
    int t ; cin>>t;
    while (t--)
    {
        ll x, y;
        cin>>x>>y;
        ll m = max(x,y);
        ll k ; 
// if (x>=y)- (1,1)(2,1)(2,2)(3,1)(3,2)(3,3)
//if x is even : (4,3)-14 : max)**2 - y + 1 ;
// if x is odd : (3,2)- 6 = max-1)**2 + y

// if (x<y)- ((1,2)(1,3)(1,4)(2,3)(3,4)(4,5)
// if y even =  (max-1)**2 + x
// if y is odd = max**2 - x + 1;
if (x>=y){
     if (x%2==0){
       k = (ll)((m*m) - y + 1ULL);
     }
     else {
       k = (ll)(((m-1)*(m-1)))  + y;
     }
}
else if(x<y){
    if(y%2==0){
      k =  (ll)(((m-1)*(m-1)) + x)  ;
    }
    else {
      k =   (ll)((m*m) - x + 1ULL) ;
    }
    }    
cout<<k<<endl;
    }
    return 0 ; 
}