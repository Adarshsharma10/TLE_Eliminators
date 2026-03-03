#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    // max_a[x] will store the longest consecutive streak of number 'x' in array A
    // The problem says values are up to 2*n
    vector<int> max_a(2 * n + 1, 0);
    vector<int> max_b(2 * n + 1, 0);

    // Process Array A
    int count = 0;
    for (int i = 0; i < n; i++) {
        count++;
        // If it's the last element or the next element is different, the streak ends
        if (i == n - 1 || a[i] != a[i + 1]) {
            max_a[a[i]] = max(max_a[a[i]], count);
            count = 0; // Reset for the next unique number
        }
    }

    // Process Array B
    count = 0;
    for (int i = 0; i < n; i++) {
        count++;
        if (i == n - 1 || b[i] != b[i + 1]) {
            max_b[b[i]] = max(max_b[b[i]], count);
            count = 0;
        }
    }

    // The answer is the best combined streak for any number 'i'
    int ans = 0;
    for (int i = 1; i <= 2 * n; i++) {
        ans = max(ans, max_a[i] + max_b[i]);
    }

    cout << ans << "\n";
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