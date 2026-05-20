#include <bits/stdc++.h>
using namespace std;

#define ll long long


ll get_emotes(ll mid, ll k) {
    if (mid <= k) {
        return (mid * (mid + 1)) / 2;
    } else {
        ll rem = (2 * k - 1) - mid;
        return k * k - (rem * (rem + 1)) / 2;
    }
}

void solve() {
    ll k, x;
    cin >> k >> x;
    
    ll low = 1, high = 2 * k - 1;
    ll ans = 2 * k - 1; 
    
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        
        if (get_emotes(mid, k) >= x) {
            ans = mid;        
            high = mid - 1;  
        } else {
            low = mid + 1;  
        }
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