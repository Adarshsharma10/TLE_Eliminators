#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()
int divi(int a,int b){
    int op=0;
    while(a!=0){
        a=a/b;
        op++;
    }
    return op;
}
void solve() {
    ll a,b;
    cin>>a>>b;
    if(a/b==0){
        cout<<1<<endl;
        return;
    }
    
    
    int maxi = INT_MAX;
    for(int i=0;i<35;i++){
        if(i==0){
            b=b;
        }
        else{
            b++;
        }
        if(b==1) continue;
        int times = i + divi(a,b);
        maxi=min(maxi,times);
    }
    cout<<maxi<<endl;
    
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

// Successsfully Submitted