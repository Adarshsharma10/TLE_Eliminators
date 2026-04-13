#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) (v).begin(), (v).end()

void solve() {
    int n;
    cin >> n;
    string a,b;
    cin>>a>>b;
    
    if(a==b){
        cout<<"YES"<<endl;
        return;
    }
    vector<int> prefix;
    int num = 0;
    for(int i=0;i<n;i++){
        if(a[i]=='1'){
            prefix.push_back(++num);
        }
        else{
            prefix.push_back(--num);
        }
    }

    vector<bool> seen(n,false);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            seen[i]=true;
        }
    }
    int T=0,F=0;
    for(int i=0;i<n;i++){
        if(prefix[i]!=0){
            if(seen[i]){
                T++;
            }
            else{
                F++;
            }
        }
        else{
            if(seen[i]){
                T++;
            }
            else{
                F++;
            }

            if(T!=0 && F!=0){
                cout<<"NO"<<endl;
                return;
            }
            else{
                T=0;
                F=0;
            }
        }
    }
    if(T!=0 && F!=0){
        cout<<"NO"<<endl;
    }
    else if(T!=0 && prefix[n-1]!=0){
        
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
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