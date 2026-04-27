#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<vector<int>> bit(n, vector<int>(32, 0));

        for(int i = 0; i < n; i++) {
            for(int b = 0; b < 32; b++) {
                bit[i][b] = ((a[i] >> b) & 1);
                if(i > 0) {
                    bit[i][b] += bit[i-1][b];
                }
            }
        }

        int q;
        cin >> q;

        while(q--) {
            int l, k;
            cin >> l >> k;
            l--; // 0-based

            int low = l;
            int high = n - 1;
            int ans = -1;

            while(low <= high) {
                int mid = (low + high) / 2;

                int res = 0;
                int len = mid - l + 1;

                for(int b = 0; b < 32; b++) {
                    int cnt;

                    if(l > 0) {
                        cnt = bit[mid][b] - bit[l-1][b];
                    } else {
                        cnt = bit[mid][b];
                    }

                    if(cnt == len) {
                        res |= (1 << b);
                    }
                }

                if(res >= k) {
                    ans = mid;
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }

            if(ans == -1) {
                cout << -1 << " ";
            } else {
                cout << ans + 1 << " ";
            }
        }

        cout << "\n";
    }
}

// Successfully Submitted