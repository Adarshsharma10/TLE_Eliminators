#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long count = 0;
        vector<long long> a;
        vector<long long> v(n);
        for(long long i=0;i<n;i++){
            cin>>v[i];
        }
        for(long long i=0;i<n;i++){
            if(v[i]==0){
                count++;
            }
            else{
                a.push_back(count);
                count=0;
            }
        }
        a.push_back(count);
        cout<<*max_element(a.begin(),a.end())<<endl;
    
        
    }
 
}

// Successfully submitted