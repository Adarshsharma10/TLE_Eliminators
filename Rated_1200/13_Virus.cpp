#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n,m;
    cin >>n>>m;
    vector<int> v(m);
    for(int i=0;i<m;i++) cin>>v[i];
    sort(all(v));
    vector<int> diff;
    for(int i=1;i<m;i++){
        diff.push_back(v[i]-v[i-1]-1);
    }
    diff.push_back(n-v[m-1]+v[0]-1);
    sort(diff.rbegin(),diff.rend());
    int x = 0;
    ll saved=0;
    for(int i=0;i<diff.size();i++){
        ll operate = diff[i]-x;
        if(operate<=0){
            break;
        }
        if(operate==1 || operate == 2){
            saved+=1;
            x+=2;
        }
        else{
            saved+=operate-1;
            x+=4;
        }
        
    }
    
    cout<<n-saved<<endl;

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

// Successfully Submitted