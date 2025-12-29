#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,lb=1,lc=0;
        cin>>n;
        vector<int> a(n);
        vector<int> b;
        vector<int> c;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        b.push_back(a[0]);
        int idx=1;
        for(int i=1;i<n;i++){
            if(a[i]==a[0]){
                b.push_back(a[i]);
                lb++;
                idx++;
            }
            else{
                idx=i;
                break;
            }
        }
        for(int i=idx;i<n;i++){
            c.push_back(a[i]);
            lc++;
        }
        if(lb==0 || lc==0){
            cout<<-1<<endl;
        }
        else{
            cout<<lb<<" "<<lc<<endl;
            for(int i=0;i<lb;i++){
                cout<<b[i]<<" ";
            }cout<<endl;
            for(int i=0;i<lc;i++){
                cout<<c[i]<<" ";
            }cout<<endl;
        }
    }
}


// Successfully submitted
        
            
