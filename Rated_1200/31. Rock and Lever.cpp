#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
        int n;
		cin >> n; 
		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i]; 

	
		vector<ll> maxSetBit(31, 0);

	
		for (int i = 0; i < n; i++)
		{
			for (int bit = 30; bit >= 0; bit--)
			{
				if ((v[i] & (1 << bit)))
				{
					maxSetBit[bit]++;
					break;
				}
			}
		}

		ll ans = 0;
		
		for (int i = 0; i < 31; i++)
		{
			ans += (maxSetBit[i] * (maxSetBit[i] - 1)) / 2;
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