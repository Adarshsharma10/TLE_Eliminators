#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll cur_len=1;
        ll max_len=1;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        for(ll i=1;i<=n-1;i++){
            if(v[i]-v[i-1]<=k){
                cur_len++;
            }
            else{
                max_len=max(max_len,cur_len);
                cur_len=1;
            }
        }
        max_len=max(max_len,cur_len);
        cout<<n-max_len<<endl;
    }
}

// Successfully submitted