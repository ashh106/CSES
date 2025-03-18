// Your task is to divide
// the numbers 1,2,...,n
// into two sets of equal sum.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   ll n ;
   cin>>n;
   ll sum = n * (n+1)/2 ;
   if(sum%2 != 0 ){
    cout<<"NO"<<endl;
   }
   else{
   cout << "YES" << endl;
    ll h = sum/2;
    ll curr_sum = 0; 
    vector<int>s1 , s2;
    for(int i = n ; i >= 1 ; i-- ){
        if(curr_sum+i<=h){
            s1.push_back(i);
            curr_sum+=i;
        }
        else{
            s2.push_back(i);
        }
    }
   cout<<s1.size()<<endl;
   for(int num : s1) cout<<num<<" ";
   cout << endl;
   cout<<s2.size()<<endl;
   for(int num : s2) cout<<num<<" ";
}
   return 0 ;
}