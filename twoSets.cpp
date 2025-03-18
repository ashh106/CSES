#include<bits/stdc++.h>
using namespace std;
#define ll long long
int fun (int n){
    int sum = 0 ;
    for ( int i = 1 ; i <= n  ; i++){
        sum = sum + i;
    }
    return sum ;
}
int main(){
    int n ; cin >>n;
    int flag = 1;
        if(n%2==0) {flag = 0; cout<<"NO"<<endl;}
        if (flag){
            cout<<"YES"<<endl;
            int a[n+1];
            for(int i = 1; i<= n ; i++ ){
                 
            }
        }
    return 0 ;
}