#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int l=0,r=n-1;
        int pl=v[0],pr=v[n-1];
        while(l<r-1){
            if(pl>=pr){
                r--;
                pr=pr*v[r];
            }
            else{
                l++;
                pl=pl*v[l];
            }
        }
        if(pl==pr){
            cout<<l+1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}

// Successfully submitted