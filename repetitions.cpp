#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count = 1;
    int maxi = 1 ;
    for (int i = 0 ; i < s.size()-1 ; i++){
        if(s[i+1]==s[i]){
            count++;
        }
        else {
            count= 1;
        }
        maxi = max(maxi , count);
    }
        cout<<maxi<<endl;   
    return 0 ;
}