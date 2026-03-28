#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        total_sum += v[i];
    }

    // Impossible to reach target sum
    if (total_sum < s) {
        cout << -1 << "\n";
        return;
    }
    
    // Already at target sum
    if (total_sum == s) {
        cout << 0 << "\n";
        return;
    }

    int max_len = 0;
    int current_sum = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {
        current_sum += v[right];

        // Shrink from the left if we exceed the budget 's'
        while (current_sum > s) {
            current_sum -= v[left];
            left++;
        }

        // Update max_len if we have exactly 's' ones
        if (current_sum == s) {
            max_len = max(max_len, right - left + 1);
        }
    }

    cout << n - max_len << "\n";
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