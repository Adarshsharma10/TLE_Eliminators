#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    ll n, k;
	cin >> n >> k;

		
	vector<pair<long long, long long>> health_points(n);
	for (long long i = 0; i < n; i++) 
	{
			long long x;
			cin >> x;
			
			health_points[i] = {x, i + 1};
	}

		
		for (long long i = 0; i < n; i++)
		{
			health_points[i].first = health_points[i].first % k;
			
			if (health_points[i].first == 0)
				health_points[i].first = k;
		}
		sort(health_points.begin(), health_points.end(), [&](pair<long long, long long> a, pair<long long, long long> b) {
			if (a.first != b.first)
				return a.first > b.first;
			return a.second < b.second;
		});

		for (auto it : health_points)
			cout << it.second << " ";
		cout << endl;
	
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