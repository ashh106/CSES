#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin>>n;
    vector<int> a(n);
    for (int i = 1 ; i<a.size() ; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int flag = 0 ;
    for (int i = 1 ; i<=a.size() ; i++){
        if ( a[i] != i){
            flag = i;
            break;
        }
    }
    cout<<flag;
    return 0 ;
}