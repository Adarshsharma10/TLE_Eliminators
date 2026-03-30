#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<ll> v(n);
    ll sum = 0;
   
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    ll global_val = 0;
    int last_all_update_time = -1; 
    vector<int> element_update_time(n, -1); 

    for (int query_id = 0; query_id < q; query_id++) {
        int t;
        cin >> t;
        if (t == 1) {
            int i;
            ll x;
            cin >> i >> x;
            i--; 

            if (element_update_time[i] < last_all_update_time) {
                v[i] = global_val;
            }

            sum += (x - v[i]);
            v[i] = x;
            element_update_time[i] = query_id;
        } 
        else {
            ll x;
            cin >> x;
            global_val = x;
            sum = (ll)n * x;
            last_all_update_time = query_id;
        }

        cout << sum << "\n";
    }

    return 0;
}

// Successfully submitted