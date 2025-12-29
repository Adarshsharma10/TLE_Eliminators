// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define all(v) (v).begin(), (v).end()

// void solve() {
//     int n,p;
//     cin >>n>>p;
//     vector<ll> r(n);
//     for(auto &x: r){
//         cin>>x;
//     }
//     vector<ll> b(n);
//     for(auto &x: b){
//         cin>>x;
//     }
//     vector<pair<int,int>> s;
//     for(int i=0;i<n;i++){
//         s.push_back({r[i],b[i]});
//     }
//     sort(s.begin(),s.end(),[](pair<int,int> a,pair<int,int> b){
//         if(a.second==b.second){
//             return a.first>b.first;
//         }
//         return a.second < b.second;
//     });
//     int ans = p;
//     int c = 0;
//     if(n==1){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<n;i++){
//         int share = s[i].first;
      
//         n = n-share-1;
//         if(n<0){
//             ans += s[i].second * (s[i].first-abs(n));
          
//         }
//         else{
//             ans += s[i].second * s[i].first;
            
//         }
//         c++;
//     }
            
//     cout<<ans+(c-1)*p<<endl;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    ll p;
    cin >> n >> p;

    vector<ll> r(n);
    for (auto &x : r) cin >> x;

    vector<ll> b(n);
    for (auto &x : b) cin >> x;

    vector<pair<ll,ll>> s;
    for (int i = 0; i < n; i++) {
        s.push_back({r[i], b[i]});
    }

    sort(s.begin(), s.end(), [](pair<ll,ll> a, pair<ll,ll> b) {
        if (a.second == b.second)
            return a.first > b.first;
        return a.second < b.second;
    });

    ll ans = p;     
    ll rem = n - 1;       

    for (int i = 0; i < n && rem > 0; i++) {
        ll share = s[i].first;
        ll cost  = s[i].second;

        if (cost >= p) break;   

        ll take = min(share, rem);
        ans += take * cost;
        rem -= take;
    }

    ans += rem * p;  
    cout << ans << endl;
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