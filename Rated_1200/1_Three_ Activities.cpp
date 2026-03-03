#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

vector<int> func(vector<int> &temp,int n){
    vector<pair<int,int>> s(n);
    for(int i=0;i<n;i++){
        s[i].first=temp[i];
        s[i].second=i;
    }
    sort(s.rbegin(),s.rend());

    vector<int> ans(3);
    for(int i=0;i<3;i++){
        ans[i]=s[i].second;
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    for(auto &x : a){
        cin>>x;
    }
    for(auto &x : b){
        cin>>x;
    }
    for(auto &x : c){
        cin>>x;
    }

    vector<int> maxa=func(a,n);
    vector<int> maxb=func(b,n);
    vector<int> maxc=func(c,n);
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                int x = maxa[i], y = maxb[j], z = maxc[k];
                if(x==y || y==z || x==z){
                    continue;
                }
                else{
                    sum=max(sum,a[x]+b[y]+c[z]);
                }

            }
        }
    }
    cout<<sum<<endl;
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