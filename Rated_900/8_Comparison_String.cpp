#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        int max_count=0;
        int curr=1;
        
        
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                curr++;
            }
            else{
                max_count=max(max_count,curr);
                curr=1;
            }
        }
        max_count=max(max_count,curr);
        cout<<max_count+1<<endl;
        
                    
    }
} 

// Successfully submitted