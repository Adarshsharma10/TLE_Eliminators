#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (v[n - 2] > v[n - 1]) {
        cout << -1 << endl;
        return;
    }


    if (v[n - 1] >= 0) {
      
        cout << n - 2 << endl;
        for (int i = 0; i < n - 2; i++) {
 
            cout << i + 1 << " " << n - 1 << " " << n << endl;
        }
    } 
   
    else {
        
        for (int i = 0; i < n - 1; i++) {
            if (v[i] > v[i + 1]) {
                cout << -1 << endl;
                return;
            }
        }
        cout << 0 << endl;
    }
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