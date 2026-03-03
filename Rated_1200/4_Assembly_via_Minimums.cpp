#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    int b = (n*(n-1))/2;
    vector<int> v(b);
    for(int i=0;i<b;i++){
        cin>>v[i];
    } 
    sort(v.begin(),v.end());
    int x = n-1,i=0;
    while(x>0){
        cout<<v[i]<<" ";
        i+=x;
        x--;
    }
    cout<<1000000000<<endl;

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