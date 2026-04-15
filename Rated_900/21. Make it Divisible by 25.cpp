#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    int min_removals = n;

    vector<string> targets = {"00", "25", "50", "75"};

    for (string t : targets) {
        int pos2 = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == t[1]) {
                pos2 = i;
                break;
            }
        }

        if (pos2 == -1) continue;

        int pos1 = -1;
        for (int i = pos2 - 1; i >= 0; i--) {
            if (s[i] == t[0]) {
                pos1 = i;
                break;
            }
        }

        if (pos1 != -1) {
            int current_removals = (n - 1 - pos2) + (pos2 - pos1 - 1);
            min_removals = min(min_removals, current_removals);
        }
    }
    cout<<min_removals<<endl;
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