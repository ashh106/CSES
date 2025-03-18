#include<bits/stdc++.h>
using namespace std;
#define ar(i , j , n ) for (int i = j ; i < n ; i++)
#define ll long long
int main(){
    // A permutaion of int 1 , 2 , 3 ...,n is beautiful - if no adjacent element whose a[i+1]-a[i] = 1
    ll n ; cin>>n;
    //odd and even 
    vector<int>a;
    if(n>3){

          for(int i = 1 ; i <= n ; i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }

 for(int i = 1 ; i <= n ; i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }

    }
    else if(n==1){
        cout<<1;
    }
    else{
        cout<<"NO SOLUTION";
    }
   
    return 0;
}