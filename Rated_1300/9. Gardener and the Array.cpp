#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<vector<int>> v(n);
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> v[i][j];
            freq[v[i][j]]++;
        }
    }

    bool found_redundant = false;
    for (int i = 0; i < n; i++) {
        bool all_bits_shared = true;
        for (int bit : v[i]) {
            if (freq[bit] == 1) {
                all_bits_shared = false;
                break;
            }
        }
        
        if (all_bits_shared) {
            found_redundant = true;
            break; 
        }
    }

    if (found_redundant) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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