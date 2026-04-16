#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n * k);
    for (int i = 0; i < n * k; i++) {
        cin >> v[i];
    }

    long long sum = 0;

    int elements_to_skip = n - (n + 1) / 2 + 1;

   
    int current_idx = n * k - elements_to_skip;
    
    for (int i = 0; i < k; i++) {
        sum += v[current_idx];
        current_idx -= elements_to_skip;
    }

    cout << sum << endl;
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

// Successully submitted