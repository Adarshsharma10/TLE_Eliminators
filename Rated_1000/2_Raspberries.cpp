#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,k;
    cin >>n>>k;
    int cnt = 0;
    int ans=INT_MAX;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(!(v[i]&1)){
            cnt++;
        }
    }

    if(k==2){
        for(int i=0;i<n;i++){
            if(v[i]%2==0){
                cout<<0<<endl;
                return;
            }
        }
        cout<<1<<endl;
        return;
    }
            
    else if(k==3){
        for(int i=0;i<n;i++){
            if(v[i]%3==0){
                cout<<0<<endl;
                return;
            }
            else{
                if((v[i]+1)%3==0){
                    ans=1;
                }
                else{
                    ans=min(ans,2);
                }
            }
        }
        
    }
    else if(k==4){
        for(int i=0;i<n;i++){
            if(v[i]%4==0){
                cout<<0<<endl;
                return;
            }
            else if(cnt>=2){
                ans=0;
            }
            else if(cnt==1){
                ans=min(ans,1);
            }
            else if((v[i]+1)%4==0){
                ans=1;
            }
        }
        cout<<min(ans,2)<<endl;
        return;
    }
    else{
        
        for(int i=0;i<n;i++){
            if(v[i]%5==0){
                cout<<0<<endl;
                return;
            }
            else{
                if((v[i]+1)%5==0){
                    ans=1;
                }
                else if((v[i]+2)%5==0){
                    ans=min(ans,2);
                }
                else if((v[i]+3)%5==0){
                    ans=min(ans,3);
                }
                else{
                    ans=min(ans,4);
                }
            }
        }
    }
        
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}


// Successfully submitted



    