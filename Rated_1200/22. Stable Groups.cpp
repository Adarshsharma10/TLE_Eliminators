#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll> v(n);
    vector<ll> diff;

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(all(v));
    for(int i=1;i<n;i++){
        diff.push_back(v[i]-v[i-1]);
    }
    int groups=1;
    vector<ll> gaps;
    for(int i=0;i<diff.size();i++){
        if(diff[i]>x){
            gaps.push_back(diff[i]);
            groups++;
        }
    }
    sort(all(gaps));
    int idx=0;
    while(k>0 && idx<gaps.size()){
        ll occupy = (gaps[idx] - 1) / x;
        if(k<occupy){
            break;
        }
        k-=occupy;
        groups--;
        idx++;
    }

    cout<<groups<<endl;
    return 0;
}

// successfully Submitted