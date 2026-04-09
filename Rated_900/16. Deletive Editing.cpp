#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;
    map<char, int> freq;
    for (char c : t) freq[c]++;
    
    string result = "";

    for (int i = s.size() - 1; i >= 0; i--) {
        if (freq[s[i]] > 0) {

            result += s[i];
            freq[s[i]]--;
        }
    }

    reverse(result.begin(), result.end());
    
    if (result == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) solve();
    return 0;
}

// Successfuuly submitted