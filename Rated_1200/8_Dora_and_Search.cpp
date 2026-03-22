#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    int max_e = n;
    int min_e = 1;
    int l=0,r=n-1;
    bool f1=0,f2=0;
    while(l<r){
        
        if(v[l]!=min_e && v[l]!=max_e){
            f1=1;
        }
        else if(v[l]==min_e){
            f1=0;
            l++;
            min_e++;
        }
        else if(v[l]==max_e){
            f1=0;
            l++;
            max_e--;
        }


        if(v[r]!=min_e && v[r]!=max_e){
            f2=1;
        }
        else if(v[r]==min_e){
            f2=0;
            r--;
            min_e++;
        }
        else if(v[r]==max_e){
            f2=0;
            r--;
            max_e--;
        }

        if(f1 && f2){
            cout<<l+1<<" "<<r+1<<endl;
            return;
        }


    }
    
    cout<<-1<<endl;
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